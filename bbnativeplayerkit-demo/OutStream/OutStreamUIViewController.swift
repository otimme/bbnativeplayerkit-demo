//
//  Tab1ViewController.swift
//  BlueBillywigNativeiOSDemo
//
//  Created by Olaf Timme on 09/02/2021.
//

import Foundation
import UIKit
import BBNativePlayerKit

class OutStreamUIViewController: UIViewController {
    
    lazy var playerTopConstraint = bbPlayerView?.topAnchor.constraint(equalTo: view.topAnchor, constant: 300 )
    lazy var playerWidthConstraint = bbPlayerView?.widthAnchor.constraint(equalTo: view.widthAnchor, constant: -10)
    lazy var playerHeightConstraint = bbPlayerView?.heightAnchor.constraint(equalToConstant: (view.frame.size.width - 10) * 9/16)
    
    let textView: UITextView = {
       let textView = UITextView()
        textView.contentInsetAdjustmentBehavior = .automatic
        textView.textAlignment = NSTextAlignment.left
        textView.textColor = UIColor.blue
        textView.backgroundColor = UIColor.clear
        textView.textColor = UIColor.black
        textView.font = UIFont.systemFont(ofSize: 16)
        textView.translatesAutoresizingMaskIntoConstraints = false
        textView.isScrollEnabled = false
        textView.text = """
Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Diam ut venenatis tellus in metus vulputate.
"""
        return textView
    }()
    
    let textView2: UITextView = {
       let textView = UITextView()
        textView.contentInsetAdjustmentBehavior = .automatic
        textView.textAlignment = NSTextAlignment.left
        textView.textColor = UIColor.blue
        textView.backgroundColor = UIColor.clear
        textView.textColor = UIColor.black
        textView.font = UIFont.systemFont(ofSize: 16)
        textView.translatesAutoresizingMaskIntoConstraints = false
        textView.isScrollEnabled = false
        textView.text = """
Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Diam ut venenatis tellus in metus vulputate. Bibendum est ultricies integer quis auctor elit sed vulputate mi. Eros in cursus turpis massa tincidunt dui ut. Velit laoreet id donec ultrices tincidunt arcu non sodales neque. Adipiscing bibendum est ultricies integer quis.
Sit amet cursus sit amet. Malesuada proin libero nunc consequat interdum varius sit amet mattis. Sem integer vitae justo eget. Sed risus ultricies tristique nulla aliquet enim tortor at. Adipiscing enim eu turpis egestas.
Felis bibendum ut tristique et egestas. Bibendum neque egestas congue quisque egestas. Augue lacus viverra vitae congue eu consequat. Vel orci porta non pulvinar neque laoreet suspendisse interdum consectetur. Facilisis leo vel fringilla est. Nisl purus in mollis nunc sed id semper risus. Vel fringilla est ullamcorper eget nulla. Odio morbi quis commodo odio aenean sed adipiscing diam. Sagittis id consectetur purus ut.
"""
        return textView
    }()
   
   
    private var bbPlayerView: BBNativePlayerView? = nil
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        view.addSubview(textView)
        textView.leftAnchor.constraint(equalTo: view.safeAreaLayoutGuide.leftAnchor, constant: 0).isActive = true
        textView.topAnchor.constraint(equalTo: view.safeAreaLayoutGuide.topAnchor, constant: 0).isActive = true
        textView.widthAnchor.constraint(equalTo: view.safeAreaLayoutGuide.widthAnchor).isActive = true
        
        view.layoutIfNeeded()
        
    
        // Create player playing inarticle advertisment
        bbPlayerView = BBNativePlayer.createPlayerView(uiViewController: self, frame: view.frame, jsonUrl: "https://demo.bbvms.com/a/native_sdk_outstream.json",options: [
            "allowCollapseExpand": true
        ])
        
        bbPlayerView?.delegate = self
        
        
        
        
        
        
        
        
        
        
        
        
        // Add player to View
        view.addSubview(bbPlayerView!)
        
        // Set player constraints
        bbPlayerView?.translatesAutoresizingMaskIntoConstraints = false
        
        bbPlayerView?.centerXAnchor.constraint(equalTo: view.centerXAnchor).isActive = true
        bbPlayerView?.topAnchor.constraint(equalTo: textView.bottomAnchor, constant: 8 ).isActive = true
        bbPlayerView?.widthAnchor.constraint(equalToConstant: 300) .isActive = true

        
        view.addSubview(textView2)
        textView2.leftAnchor.constraint(equalTo: view.safeAreaLayoutGuide.leftAnchor, constant: 0).isActive = true
        textView2.topAnchor.constraint(equalTo: bbPlayerView!.bottomAnchor, constant: 0).isActive = true
        textView2.widthAnchor.constraint(equalTo: view.safeAreaLayoutGuide.widthAnchor).isActive = true
        
        
        // create rect for player to exclude text to render there
//        let rect = CGRect(x: 0, y: 200, width: view.bounds.size.width, height: view.bounds.size.width * 9/16)
//        textView.textContainer.exclusionPaths = [UIBezierPath(rect: rect)]
        
        // place the cast button in the navigation bar
        if let castButton = bbPlayerView?.player.createChromeCastButton {
            castButton.tintColor = UIColor.black
            navigationItem.rightBarButtonItem = UIBarButtonItem(customView: castButton)
        }
    }
    
    //MARK: - Handle rotation
    override func viewWillTransition(to size: CGSize, with coordinator: UIViewControllerTransitionCoordinator) {
        super.viewWillTransition(to: size, with: coordinator)
        
        if UIDevice.current.orientation.isLandscape {
            DispatchQueue.main.async {
                self.playerTopConstraint?.constant = 0
                self.playerWidthConstraint?.constant = self.view.frame.size.width
                self.playerHeightConstraint?.constant = self.view.frame.size.height
            }
        } else {
            DispatchQueue.main.async {
                self.playerTopConstraint?.constant = 300
                self.playerWidthConstraint?.constant = -10
                self.playerHeightConstraint?.constant = (self.view.frame.size.width - 10) * 9/16
            }
        }
    }
}


extension OutStreamUIViewController: BBNativePlayerViewDelegate {
    func bbNativePlayerView(didRequestCollapse playerView: BBNativePlayerView) {
        print("*** did request collapse")
    }
    
    func bbNativePlayerView(didRequestExpand playerView: BBNativePlayerView) {
        print("*** did request expand")
    }
}
