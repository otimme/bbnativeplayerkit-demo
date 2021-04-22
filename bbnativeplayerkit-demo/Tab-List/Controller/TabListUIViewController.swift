

import Foundation
import UIKit

class TabListUIViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
    
        let layout = UICollectionViewFlowLayout()
        let listViewController = ListViewController(collectionViewLayout: layout)
        
        addChild(listViewController)
        view.addSubview(listViewController.view)
        listViewController.didMove(toParent: self)
    }

    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
    }
}


