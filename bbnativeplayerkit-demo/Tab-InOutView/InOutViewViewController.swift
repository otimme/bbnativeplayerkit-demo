//
//  Tab1ViewController.swift
//  BlueBillywigNativeiOSDemo
//
//  Created by Olaf Timme on 09/02/2021.
//

import Foundation
import UIKit
import BBNativePlayerKit

class InOutViewViewController: UIViewController {

    let redView: UIView = {
        let v = UIView()
        v.backgroundColor = .red
        v.translatesAutoresizingMaskIntoConstraints = false
        return v
    }()

    let greenView: UIView = {
        let v = UIView()
        v.backgroundColor = .green
        v.translatesAutoresizingMaskIntoConstraints = false
        return v
    }()

    let blueView: UIView = {
        let v = UIView()
        v.backgroundColor = .blue
        v.translatesAutoresizingMaskIntoConstraints = false
        return v
    }()

    let scrollView: UIScrollView = {
        let v = UIScrollView()
        v.translatesAutoresizingMaskIntoConstraints = false
        v.backgroundColor = .cyan
        return v
    }()

    private var bbPlayerView: BBNativePlayerView? = nil
    
    override func viewDidLoad() {
        super.viewDidLoad()
        print("View InOutViewViewController Loaded")
        
        // add the scroll view to self.view
        self.view.addSubview(scrollView)

        // constrain the scroll view to 8-pts on each side
        scrollView.leftAnchor.constraint(equalTo: view.leftAnchor, constant: 8.0).isActive = true
        scrollView.topAnchor.constraint(equalTo: view.topAnchor, constant: 8.0).isActive = true
        scrollView.rightAnchor.constraint(equalTo: view.rightAnchor, constant: -8.0).isActive = true
        scrollView.bottomAnchor.constraint(equalTo: view.bottomAnchor, constant: -8.0).isActive = true

        // add three views to the scroll view
        scrollView.addSubview(redView)
        scrollView.addSubview(greenView)
        scrollView.addSubview(blueView)

        // give each view a height of 300
        NSLayoutConstraint.activate([
            redView.heightAnchor.constraint(equalToConstant: 300),
            greenView.heightAnchor.constraint(equalToConstant: 400),
            blueView.heightAnchor.constraint(equalToConstant: 600),
            ])

        // give each view a width constraint equal to scrollView's width
        NSLayoutConstraint.activate([
            redView.widthAnchor.constraint(equalTo: scrollView.widthAnchor),
            greenView.widthAnchor.constraint(equalTo: scrollView.widthAnchor),
            blueView.widthAnchor.constraint(equalTo: scrollView.widthAnchor),
            ])

        // constrain each view's leading and trailing to the scrollView
        // this also defines the width of the scrollView's .contentSize
        NSLayoutConstraint.activate([
            redView.leadingAnchor.constraint(equalTo: scrollView.leadingAnchor),
            greenView.leadingAnchor.constraint(equalTo: scrollView.leadingAnchor),
            blueView.leadingAnchor.constraint(equalTo: scrollView.leadingAnchor),
            redView.trailingAnchor.constraint(equalTo: scrollView.trailingAnchor),
            greenView.trailingAnchor.constraint(equalTo: scrollView.trailingAnchor),
            blueView.trailingAnchor.constraint(equalTo: scrollView.trailingAnchor),
        ])

        // constrain redView's Top to scrollView's Top + 8-pts padding
        // this also defines the Top of the scrollView's .contentSize
        NSLayoutConstraint.activate([
            redView.topAnchor.constraint(equalTo: scrollView.topAnchor, constant: 8.0),
            ])

        // constrain greenView's Top to redView's Bottom + 20-pts spacing
        NSLayoutConstraint.activate([
            greenView.topAnchor.constraint(equalTo: redView.bottomAnchor, constant: 20.0),
            ])

        // constrain blueView's Top to greenView's Bottom + 20-pts spacing
        NSLayoutConstraint.activate([
            blueView.topAnchor.constraint(equalTo: greenView.bottomAnchor, constant: 20.0),
            ])

        // constrain blueView's Bottom to scrollView's Bottom + 8-pts padding
        // this also defines the Bottom / Height of the scrollView's .contentSize
        // Note: it must be negative
        NSLayoutConstraint.activate([
            blueView.bottomAnchor.constraint(equalTo: scrollView.bottomAnchor, constant: -200.0),
            ])
        
        bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://bb.dev.bbvms.com/p/default/c/1092747.json")
     
        scrollView.addSubview(bbPlayerView!)
        bbPlayerView?.translatesAutoresizingMaskIntoConstraints = false
        bbPlayerView?.leadingAnchor.constraint(equalTo: scrollView.leadingAnchor).isActive = true
        bbPlayerView?.trailingAnchor.constraint(equalTo: scrollView.trailingAnchor).isActive = true
        bbPlayerView?.topAnchor.constraint(equalTo: greenView.bottomAnchor, constant: 20 ).isActive = true
        bbPlayerView?.widthAnchor.constraint(equalTo: scrollView.widthAnchor) .isActive = true
        bbPlayerView?.heightAnchor.constraint(equalToConstant: self.scrollView.frame.size.width * 9/16).isActive = true
        bbPlayerView?.bottomAnchor.constraint(equalTo: scrollView.bottomAnchor).isActive = true
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        print("View InOutViewViewController Appeared")
    }

    
    override func viewWillTransition(to size: CGSize, with coordinator: UIViewControllerTransitionCoordinator) {

        super.viewWillTransition(to: size, with: coordinator)
        if UIDevice.current.orientation.isLandscape {
            print("Landscape")
        } else {
            print("Portrait")
        }
    }
}

/*
//
//  ViewController.swift
//  BBNativePlayerKit-demo
//
//  Created by Olaf Timme on 05/11/2020.
//  Copyright © 2020 BlueBillywig. All rights reserved.
//

import UIKit
import BBNativePlayerKit
import AVFoundation
import AVKit
import bbnativeshared

class ViewController: UIViewController, UIPickerViewDelegate, UIPickerViewDataSource {
    
    
    @IBOutlet weak var APIAction: UIPickerView!
    
    
//    @IBOutlet weak var debugText: UITextView!
//    @IBOutlet weak var panelView: UIView!
//
//    private var debugging: Bool = true
    private var bbPlayerView: BBNativePlayerView? = nil
    //CGRect(x: 0, y: 0, width: view.frame.width, height: view.frame.width * 9 / 16)private var bbPlayerView: BBNativePlayerView
    
    
    

    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Connect data:
        APIAction.delegate = self
        APIAction.dataSource = self
        
        
        


        // video with preroll
        // bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://bb.dev.bbvms.com/p/puc_click_to_play/c/1092747.json")

        // cliplist embed
        // TODO:  cliplist embed
        // bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://bb.dev.bbvms.com/p/default/l/1587737771658258.json")

        // project embed
        // TODO:  project embed
        // bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://bb.dev.bbvms.com/p/default/p/3286.json")
        
        // inarticle
        // TODO:  inarticle embed
        // bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://testsuite.acc.bbvms.com/a/inarticle_demo_ad_pod.json")
        
        // vertical video
        // bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://bb.dev.bbvms.com/p/default/c/1084217.json")
        
        // square video
        // bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://bb.dev.bbvms.com/p/default/c/1089629.json")
        
        // autoplay
        // bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://bb.dev.bbvms.com/p/autoplay_with_hlsjs/c/1093816.json")
        
        // ad position pre roll
        // bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://bb.dev.bbvms.com/p/force_bb_ima/c/1087150.json")

        // ad position mid roll
        // TODO:  ad position mid roll
        
        // ad position post roll
        // TODO:  ad position post roll
        // bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://bb.dev.bbvms.com/p/adstesto/c/1089419.json")

        // leader
        // TODO:  leader
        // bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://bb.dev.bbvms.com/p/leader_vraagteken/c/1087150.json")

        // live stream m3u8
        // bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://bb.dev.bbvms.com/p/default/c/1093776.json")

        // HLS live stream m3u8
        // bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://bb.dev.bbvms.com/p/default/c/1074807.json")
        
        //FITMODE TEST
        // bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://bb.dev.bbvms.com/p/fitmode/c/1092747.json")
        bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://bb.dev.bbvms.com/p/default/c/1092747.json")
        
        

        
        
        bbPlayerView?.nativeControls = true

        view.addSubview(bbPlayerView!)
        bbPlayerView?.translatesAutoresizingMaskIntoConstraints = false
        bbPlayerView?.leftAnchor.constraint(equalTo: view.leftAnchor).isActive = true
        bbPlayerView?.topAnchor.constraint(equalTo: view.topAnchor, constant: 50 ).isActive = true
        if #available(iOS 11, *) {
            let guide = view.safeAreaLayoutGuide
            bbPlayerView?.topAnchor.constraint(equalTo: guide.topAnchor, constant: 8 ).isActive = true
        } else {
            bbPlayerView?.topAnchor.constraint(equalTo: topLayoutGuide.bottomAnchor, constant: 8 ).isActive = true
        }
        
        bbPlayerView?.widthAnchor.constraint(equalTo: view.widthAnchor) .isActive = true
        bbPlayerView?.heightAnchor.constraint(equalToConstant: self.view.frame.size.width * 9/16).isActive = true
       
//        scrollView.addSubview(bbPlayerView!)
//        bbPlayerView?.translatesAutoresizingMaskIntoConstraints = false
//        bbPlayerView?.leadingAnchor.constraint(equalTo: scrollView.leadingAnchor).isActive = true
//        bbPlayerView?.trailingAnchor.constraint(equalTo: scrollView.trailingAnchor).isActive = true
//        bbPlayerView?.topAnchor.constraint(equalTo: blueView.bottomAnchor, constant: 20 ).isActive = true
//        bbPlayerView?.widthAnchor.constraint(equalTo: scrollView.widthAnchor) .isActive = true
//        bbPlayerView?.heightAnchor.constraint(equalToConstant: self.scrollView.frame.size.width * 9/16).isActive = true
//        bbPlayerView?.bottomAnchor.constraint(equalTo: scrollView.bottomAnchor).isActive = true

        
        
        
        
        bbPlayerView!.delegate = self

    }
    
//    override var prefersStatusBarHidden: Bool {
//        return true
//    }
//
    func VideoModal() {
        bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://bb.dev.bbvms.com/p/puc_click_to_play/c/1092747.json")
        bbPlayerView?.nativeControls = true
        bbPlayerView?.presentModal(uiViewContoller: self, animated: true)
    }
    
//    @IBAction func DebugButton(_ sender: UISegmentedControl) {
//        print("# of Segments = \(sender.numberOfSegments)")
//        switch sender.selectedSegmentIndex {
//        case 0:
//            debugging = true
//        case 1:
//            debugging = false
//        default:
//            break;
//        }  //Switch
//    }
    
    override func viewWillTransition(to size: CGSize, with coordinator: UIViewControllerTransitionCoordinator) {

        super.viewWillTransition(to: size, with: coordinator)
        if UIDevice.current.orientation.isLandscape {
            print("Landscape")
            bbPlayerView?.leftAnchor.constraint(equalTo: view.leftAnchor).isActive = true
            bbPlayerView?.topAnchor.constraint(equalTo: view.topAnchor).isActive = true
            bbPlayerView?.widthAnchor.constraint(equalTo: view.widthAnchor) .isActive = true
            bbPlayerView?.heightAnchor.constraint(equalTo: view.heightAnchor).isActive = true
        } else {
            print("Portrait")
            bbPlayerView?.leftAnchor.constraint(equalTo: view.leftAnchor).isActive = true
            bbPlayerView?.topAnchor.constraint(equalTo: view.topAnchor, constant: 20 ).isActive = true
            bbPlayerView?.widthAnchor.constraint(equalTo: view.widthAnchor) .isActive = true
            bbPlayerView?.heightAnchor.constraint(equalToConstant: self.view.frame.size.width * 9/16).isActive = true
        }
    }
    
//    func addToDebugText( _ text: String ) {
//        if ( !debugging ) {
//            return
//        }
//        print(text)
//        DispatchQueue.main.async { [weak self] in
//            self?.debugText.text.append(text + "\n")
//            let range = NSMakeRange((self?.debugText.text.count ?? 0) - 1, 0)
//            self?.debugText.scrollRangeToVisible(range)
//
//        }
//    }
    

    
    //MARK: - API TESTS
    
    @IBOutlet weak var debugTextLabel: UILabel!
    @IBOutlet weak var debugUIText: UITextField!
    @IBOutlet weak var debugUITextView: UITextView!
    
    func numberOfComponents(in pickerView: UIPickerView) -> Int {
        return 1
    }
    
    func pickerView(_ pickerView: UIPickerView, numberOfRowsInComponent component: Int) -> Int {
        return APIActions.count
    }
    // The data to return fopr the row and component (column) that's being passed in
    func pickerView(_ pickerView: UIPickerView, titleForRow row: Int, forComponent component: Int) -> String? {
       return APIActions[row]
    }
    
    private var APIActions: [String] = ["Select API method", "Play", "Pause", "Load", "GetThumnailUrlString", "getAssets", "getClipData", "getCurrentTime", "getDeeplink", "getDuration", "getMuted", "getPhase", "isPlaying", "getPlayoutData", "getProjectData", "OpenModalPlayer"]
    
    // Capture the picker view selection
    func pickerView(_ pickerView: UIPickerView, didSelectRow row: Int, inComponent component: Int) {
        // This method is triggered whenever the user makes a change to the picker selection.
        // The parameter named row and component represents what was selected.
        print(APIActions[row])
    switch APIActions[row] {
    case "Play":
        bbPlayerView?.play()
        break
    case "Pause":
        bbPlayerView?.pause()
        break
    case "Load":
        bbPlayerView?.load(contentId: "1084217", contentIndicator: "c", initiator: nil, autoPlay: nil, seekPosition: nil)
        break
    case "GetThumnailUrlString":
        showValue(title: "Thumbnail url", message: (bbPlayerView?.getThumbnailUrlString(clipId: "999999", width: 300, height: 200))!)
        break
    case "getAssets":
        if ( bbPlayerView?.getAssets() != nil ) {
            //showValue(title: "Asset count", message: (String((bbPlayerView?.getAssets()!.count)!)))
        }
        break
    case "getClipData":
        if ( bbPlayerView?.getClipData() != nil ) {
            showValue(title: "Clip id", message: (bbPlayerView?.getClipData()?.id)!)
        } else {
            showValue(title: "Data", message: "Not available atm")
        }
        break
    case "getCurrentTime":
        if ( bbPlayerView?.getCurrentTime() != nil ) {
            showValue(title: "Current time", message: String((bbPlayerView?.getCurrentTime())!))
        } else {
            showValue(title: "Data", message: "Not available atm")
        }
        break
    case "getDeeplink":
        if ( bbPlayerView?.getDeeplink() != nil ) {
            showValue(title: "Deeplink", message: String((bbPlayerView?.getDeeplink())!))
        } else {
            showValue(title: "Data", message: "Not available atm")
        }
        break
    case "getDuration":
        if ( bbPlayerView?.getDuration() != nil ) {
            showValue(title: "Duration", message: String((bbPlayerView?.getDuration())!))
        } else {
            showValue(title: "Data", message: "Not available atm")
        }
        break
    case "getMuted":
        if ( bbPlayerView?.getMuted() != nil ) {
            showValue(title: "Muted?", message: String((bbPlayerView?.getMuted())!))
        } else {
            showValue(title: "Data", message: "Not available atm")
        }
        break
    case "getPhase":
        if ( bbPlayerView?.getPhase() != nil ) {
            showValue(title: "Phase", message: "\(bbPlayerView?.getPhase())")
        } else {
            showValue(title: "Data", message: "Not available atm")
        }
        break
    case "isPlaying":
        if ( bbPlayerView?.isPlaying() != nil ) {
            showValue(title: "Playing?", message: String((bbPlayerView?.isPlaying())!))
        } else {
            showValue(title: "Data", message: "Not available atm")
        }
        break
    case "getPlayoutData":
        if ( bbPlayerView?.getPlayoutData() != nil ) {
            showValue(title: "Playout name", message: (bbPlayerView?.getPlayoutData()?.name)!)
        } else {
            showValue(title: "Data", message: "Not available atm")
        }
        break
    case "getProjectData":
        if ( bbPlayerView?.getProjectData() != nil ) {
            showValue(title: "Project name", message: (bbPlayerView?.getProjectData()?.name)!)
        } else {
            showValue(title: "Data", message: "Not available atm")
        }
        break
    case "OpenModalPlayer":
        VideoModal()
        break
    default:
            break
        }
    }
    
    func showValue(title: String, message: String) {
        debugTextLabel.text = title
        debugUIText.text = message
        
//        let alert = UIAlertController(title: title, message: message, preferredStyle: .alert)
//        alert.addAction(UIAlertAction(title: "OK", style: .cancel, handler: nil))
//        self.present(alert, animated: true)
    }
    
    func addToEventDebug( _ message: String ) {
        debugUITextView.text.append(message + "\n")
        let range = NSMakeRange((debugUITextView.text.count) - 1, 0)
        debugUITextView.scrollRangeToVisible(range)
    }
}

extension ViewController: BBNativePlayerViewDelegate {
    func didLoadEmbedData(data: EmbedObject) {
        addToEventDebug("Player API Delegate: didLoadEmbedData")
    }
    
    func didLoadMediaClipData(data: MediaClip) {
        addToEventDebug("Player API Delegate: didLoadMediaClipData")
    }
    
    func didLoadProjectData(data: Project) {
        addToEventDebug("Player API Delegate: didLoadProjectData")
    }
    
    func didTriggerCanplay() {
        addToEventDebug("Player API Delegate: didTriggerCanplay")
    }
    
    func didTriggerPlay() {
        addToEventDebug("Player API Delegate: didTriggerPlay")
    }
    
    func didTriggerPause() {
        addToEventDebug("Player API Delegate: didTriggerPause")
    }
    
    func didTriggerPlaying() {
        addToEventDebug("Player API Delegate: didTriggerPlaying")
    }
    
    func didTriggerFinish() {
        addToEventDebug("Player API Delegate: didTriggerFinish")
    }
    
    func didTriggerSeeking() {
        addToEventDebug("Player API Delegate: didTriggerSeeking")
    }
    
    func didTriggerSeek() {
        addToEventDebug("Player API Delegate: didTriggerSeek")
    }
    
    func didTriggerEnd() {
        addToEventDebug("Player API Delegate: didTriggerEnd")
    }
    
    func didTriggerStart() {
        addToEventDebug("Player API Delegate: didTriggerStart")
    }
    
    func didTriggerStall() {
        addToEventDebug("Player API Delegate: didTriggerStall")
    }
    
    func didTriggerProgress() {
        addToEventDebug("Player API Delegate: didTriggerProgress")
    }
    
    func didTriggerError() {
        addToEventDebug("Player API Delegate: didTriggerError")
    }
    
    func didTriggerAdError() {
        addToEventDebug("Player API Delegate: didTriggerAdError")
    }
}
*/
