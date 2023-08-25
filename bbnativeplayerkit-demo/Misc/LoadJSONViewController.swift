//
//  LoadJSONViewController.swift
//  bbnativeplayerkit-demo
//
//  Created by Olaf Timme on 14/06/2023.
//

import UIKit
import BBNativePlayerKit

class LoadJSONViewController: UIViewController {

    internal var bbPlayerView: BBNativePlayerView? = nil
    private let jsonUrlInputField =  UITextField(frame: CGRect(x: 0, y: 0, width: 300, height: 40))

    override func viewDidLoad() {
        super.viewDidLoad()
        jsonUrlInputField.placeholder = "Enter text here"
        jsonUrlInputField.text = "https://demo.bbvms.com/p/native_sdk/c/4256593.json"
        jsonUrlInputField.font = UIFont.systemFont(ofSize: 12)
        jsonUrlInputField.borderStyle = UITextField.BorderStyle.roundedRect
        jsonUrlInputField.autocorrectionType = UITextAutocorrectionType.no
        jsonUrlInputField.keyboardType = UIKeyboardType.default
        jsonUrlInputField.returnKeyType = UIReturnKeyType.done
        jsonUrlInputField.clearButtonMode = UITextField.ViewMode.whileEditing
        jsonUrlInputField.contentVerticalAlignment = UIControl.ContentVerticalAlignment.center
        jsonUrlInputField.delegate = self
        self.view.addSubview(jsonUrlInputField)
        
        jsonUrlInputField.translatesAutoresizingMaskIntoConstraints = false
        jsonUrlInputField.leftAnchor.constraint(equalTo: view.safeAreaLayoutGuide.leftAnchor, constant: 0).isActive = true
        jsonUrlInputField.topAnchor.constraint(equalTo: view.safeAreaLayoutGuide.topAnchor, constant: 10).isActive = true
        jsonUrlInputField.widthAnchor.constraint(equalTo: view.safeAreaLayoutGuide.widthAnchor, constant: -40).isActive = true
        jsonUrlInputField.heightAnchor.constraint(equalToConstant: 30).isActive = true

        let loadButton = UIButton(type: UIButton.ButtonType.custom)
        loadButton.setTitle("load", for: .normal)
        loadButton.translatesAutoresizingMaskIntoConstraints = false
        loadButton.backgroundColor = .systemIndigo
        loadButton.titleLabel?.font = UIFont.systemFont(ofSize: 12)
        loadButton.addTarget(self, action: #selector(handleLoadButton), for: .touchUpInside)
        loadButton.frame = CGRect(x: 0, y: 0, width: 58, height: 80)
        self.view.addSubview(loadButton)
        
        loadButton.translatesAutoresizingMaskIntoConstraints = false
        loadButton.leftAnchor.constraint(equalTo: jsonUrlInputField.rightAnchor, constant: 0).isActive = true
        loadButton.topAnchor.constraint(equalTo: jsonUrlInputField.topAnchor, constant: 0).isActive = true
        loadButton.widthAnchor.constraint(equalToConstant: 40).isActive = true
        loadButton.heightAnchor.constraint(equalToConstant: 30).isActive = true
    }
    
    @objc private func handleLoadButton(gesture: UITapGestureRecognizer) {
        if let url = jsonUrlInputField.text {
            if ( url != "" ) {
                bbPlayerView?.destroy()
                bbPlayerView?.removeFromSuperview()
                bbPlayerView = nil
                
                bbPlayerView = BBNativePlayer.createPlayerView(uiViewController: self, frame: .zero, jsonUrl: url)
                
                view.addSubview(bbPlayerView!)
                
                bbPlayerView?.translatesAutoresizingMaskIntoConstraints = false
                bbPlayerView?.leftAnchor.constraint(equalTo: view.leftAnchor).isActive = true
                if #available(iOS 11, *) {
                    let guide = view.safeAreaLayoutGuide
                    bbPlayerView?.topAnchor.constraint(equalTo: guide.topAnchor, constant: 50 ).isActive = true
                    //bbPlayerView?.bottomAnchor.constraint(equalTo: guide.bottomAnchor, constant: 0 ).isActive = true
                } else {
                    bbPlayerView?.topAnchor.constraint(equalTo: topLayoutGuide.bottomAnchor, constant: 50 ).isActive = true
                }

                let w: CGFloat = self.view.frame.size.width
                bbPlayerView?.widthAnchor.constraint(equalToConstant: w) .isActive = true
                bbPlayerView?.heightAnchor.constraint(equalToConstant: w * 9/16).isActive = true
            }
        }
    }
}


// MARK:- ---> UITextFieldDelegate

extension LoadJSONViewController: UITextFieldDelegate {

    func textFieldShouldBeginEditing(_ textField: UITextField) -> Bool {
        // return NO to disallow editing.
        print("TextField should begin editing method called")
        return true
    }

    func textFieldDidBeginEditing(_ textField: UITextField) {
        // became first responder
        print("TextField did begin editing method called")
    }

    func textFieldShouldEndEditing(_ textField: UITextField) -> Bool {
        // return YES to allow editing to stop and to resign first responder status. NO to disallow the editing session to end
        print("TextField should snd editing method called")
        return true
    }

    func textFieldDidEndEditing(_ textField: UITextField) {
        // may be called if forced even if shouldEndEditing returns NO (e.g. view removed from window) or endEditing:YES called
        print("TextField did end editing method called")
    }

    func textFieldDidEndEditing(_ textField: UITextField, reason: UITextField.DidEndEditingReason) {
        // if implemented, called in place of textFieldDidEndEditing:
        print("TextField did end editing with reason method called")
    }

    func textField(_ textField: UITextField, shouldChangeCharactersIn range: NSRange, replacementString string: String) -> Bool {
        // return NO to not change text
        print("While entering the characters this method gets called")
        return true
    }

    func textFieldShouldClear(_ textField: UITextField) -> Bool {
        // called when clear button pressed. return NO to ignore (no notifications)
        print("TextField should clear method called")
        return true
    }

    func textFieldShouldReturn(_ textField: UITextField) -> Bool {
        // called when 'return' key pressed. return NO to ignore.
        print("TextField should return method called")
        // may be useful: textField.resignFirstResponder()
        return true
    }

}

// MARK: UITextFieldDelegate <---
