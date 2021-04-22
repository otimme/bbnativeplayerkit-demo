//
//  Tab1ViewController.swift
//  BlueBillywigNativeiOSDemo
//
//  Created by Olaf Timme on 09/02/2021.
//

import Foundation
import UIKit

class Tab4UIViewController: UIViewController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        print("View Tab4 Loaded")
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        print("View Tab4 Appeared")
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
