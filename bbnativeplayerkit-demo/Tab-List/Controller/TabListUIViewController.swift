

import Foundation
import UIKit

class CustomNavigationController: UINavigationController {
    override var preferredStatusBarStyle: UIStatusBarStyle {
        return .lightContent
    }
}

class TabListUIViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        print("View Tab1 Loaded")
        let layout = UICollectionViewFlowLayout()
        let listViewController = ListViewController(collectionViewLayout: layout)
        
        addChild(listViewController)
        view.addSubview(listViewController.view)
        listViewController.didMove(toParent: self)
        
        
        UINavigationBar.appearance().barTintColor = UIColor(hex: "#7ab1dfff")

        let statusBarBackgroundView = UIView()
        statusBarBackgroundView.backgroundColor = UIColor(hex: "#7ab1dfff")

        self.view.addSubview(statusBarBackgroundView)
        self.view.addConstraintsWithFormat("H:|[v0]|", views: statusBarBackgroundView)
    }

    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        print("View Tab1 Appeared")
        

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


