//
//  AudioPlayerViewController.swift
//  bbnativeplayerkit-demo
//
//  Created by Olaf Timme on 25/08/2023.
//

import UIKit
import bbnativeshared
import BBNativePlayerKit

class AudioPlayerViewController: UIViewController {

    internal var bbPlayerView: BBNativePlayerView? = nil
        
    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
        view.backgroundColor = .white
        
        // create player view using the embed url
        bbPlayerView = BBNativePlayer.createPlayerView(uiViewController: self, frame: view.frame, jsonUrl: "https://demo.bbvms.com/p/native_sdk/c/4500060.json", options: ["audioPlayer": true])
        
        // use constraints to place and size the player view
        view.addSubview(bbPlayerView!)
        bbPlayerView?.translatesAutoresizingMaskIntoConstraints = false
        bbPlayerView?.centerXAnchor.constraint(equalTo: view.safeAreaLayoutGuide.centerXAnchor).isActive = true
        bbPlayerView?.centerYAnchor.constraint(equalTo: view.safeAreaLayoutGuide.centerYAnchor, constant: 0 ).isActive = true
        bbPlayerView?.widthAnchor.constraint(equalTo: view.safeAreaLayoutGuide.widthAnchor, constant: -10).isActive = true
        bbPlayerView?.heightAnchor.constraint(equalToConstant: 40).isActive = true
    }
}
