//
//  HighlightsUIViewController.swift
//  bbnativeplayerkit-demo
//
//  Created by Olaf Timme on 12/09/2024.
//

import Foundation
import UIKit
import BBNativePlayerKit

class HighlightsUIViewController: UIViewController {

    private var bbPlayerView: BBNativePlayerView? = nil
    
    override func viewDidLoad() {
        super.viewDidLoad()

        bbPlayerView = BBNativePlayer.createPlayerView(uiViewController: self, frame: view.frame, jsonUrl: "https://testsuite.acc.bbvms.com//p/default/c/7630.json")
        view.addSubview(bbPlayerView!)
        bbPlayerView?.translatesAutoresizingMaskIntoConstraints = false
        bbPlayerView?.topAnchor.constraint(equalTo: view.topAnchor, constant: 200).isActive = true
        bbPlayerView?.centerXAnchor.constraint(equalTo: view.centerXAnchor, constant: 0 ).isActive = true
        bbPlayerView?.widthAnchor.constraint(equalTo: view.widthAnchor) .isActive = true
        bbPlayerView?.heightAnchor.constraint(equalToConstant: view.frame.size.width * 9/16).isActive = true
    }
}
