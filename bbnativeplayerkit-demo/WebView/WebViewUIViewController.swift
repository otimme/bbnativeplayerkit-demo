//
//  WebViewViewController.swift
//  bbnativeplayerkit-demo
//
//  Created by Olaf Timme on 30/04/2021.
//

import UIKit
import WebKit
import BBNativePlayerKit

class WebViewUIViewController: UIViewController {
    
    private let webView = WKWebView(frame: .zero)
    private let startVideoInNativePlayer = "startVideoInNativePlayer"
    private var bbPlayerView: BBNativePlayerView? = nil
    
    override func viewDidLoad() {
        super.viewDidLoad()
        webView.translatesAutoresizingMaskIntoConstraints = false
        
        view.addSubview(self.webView)
        NSLayoutConstraint.activate([
            self.webView.leftAnchor.constraint(equalTo: self.view.safeAreaLayoutGuide.leftAnchor),
            self.webView.bottomAnchor.constraint(equalTo: self.view.safeAreaLayoutGuide.bottomAnchor),
            self.webView.rightAnchor.constraint(equalTo: self.view.safeAreaLayoutGuide.rightAnchor),
            self.webView.topAnchor.constraint(equalTo: self.view.safeAreaLayoutGuide.topAnchor),
        ])

        self.view.setNeedsLayout()
        let request = URLRequest(url: URL.init(string: "https://bluebillywig.tv/native-demo/")!)
        
        
        let contentController = self.webView.configuration.userContentController
        contentController.add(self, name: startVideoInNativePlayer)
        
        self.webView.load(request)
    }
    
    // cleanup when view disappears
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        bbPlayerView?.destroy()
    }
}

extension WebViewUIViewController: WKScriptMessageHandler {
    func userContentController(_ userContentController: WKUserContentController, didReceive message: WKScriptMessage) {
        print("userContentController")
        if ( message.name == startVideoInNativePlayer ) {
            guard let dict = message.body as? [String: AnyObject],
                let embedUrl = dict["embedUrl"] as? String else {
                    return
            }
            
            BBNativePlayer.createModalPlayerView(uiViewContoller: self, jsonUrl: embedUrl)
        }
    }
}
