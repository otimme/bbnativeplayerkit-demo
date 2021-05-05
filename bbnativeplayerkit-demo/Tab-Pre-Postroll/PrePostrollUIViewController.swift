//
//  Tab1ViewController.swift
//  BlueBillywigNativeiOSDemo
//
//  Created by Olaf Timme on 09/02/2021.
//

import Foundation
import UIKit
import BBNativePlayerKit

class PrePostrollUIViewController: UIViewController {
    
    let textView: UITextView = {
       let textView = UITextView()
        textView.contentInsetAdjustmentBehavior = .automatic
        textView.textAlignment = NSTextAlignment.left
        textView.textColor = UIColor.blue
        textView.backgroundColor = UIColor.clear
        textView.textColor = UIColor.black
        textView.font = UIFont.systemFont(ofSize: 16)
        textView.translatesAutoresizingMaskIntoConstraints = false
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
        textView.heightAnchor.constraint(equalTo: view.safeAreaLayoutGuide.heightAnchor).isActive = true
        
        view.layoutIfNeeded()
        
        
        // Create player with content playing pre- and postroll advertisements
        bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://testsuite.acc.bbvms.com/p/leader_test/c/6417.json")

        // Add player to View
        view.addSubview(bbPlayerView!)
        
        // Set player constraints
        bbPlayerView?.translatesAutoresizingMaskIntoConstraints = false
        bbPlayerView?.topAnchor.constraint(equalTo: view.topAnchor, constant: 300 ).isActive = true
        bbPlayerView?.centerXAnchor.constraint(equalTo: view.centerXAnchor, constant: 0 ).isActive = true
        bbPlayerView?.widthAnchor.constraint(equalTo: view.widthAnchor, constant: -10) .isActive = true
        bbPlayerView?.heightAnchor.constraint(equalToConstant: (view.frame.size.width - 10) * 9/16).isActive = true
     
        
        // create rect for player to exclude text to render there
        let rect = CGRect(x: 0, y: 200, width: view.bounds.size.width, height: view.bounds.size.width * 9/16)
        textView.textContainer.exclusionPaths = [UIBezierPath(rect: rect)]
    }
    
    // cleanup when view disappears
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        bbPlayerView?.__destruct()
    }
}
