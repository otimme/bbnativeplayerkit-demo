//
//  Tab1ViewController.swift
//  BlueBillywigNativeiOSDemo
//
//  Created by Olaf Timme on 09/02/2021.
//


import Foundation
import UIKit
import BBNativePlayerKit
import bbnativeshared


class ListViewController: UICollectionViewController, UICollectionViewDelegateFlowLayout {
    
    var mediaClips: [MediaClip]?

    func fetchVideos() {
        let url = URL(string: "https://bb.dev.bbvms.com/json/search?cliplistid=1587737771658258&allowCache=true")
        
        let request: URLRequest? = URLRequest(url: url!)

        let task = URLSession.shared.dataTask( with: request!, completionHandler: { data, response, error in
            if ( error != nil ) {
                print("\(String(describing: error))")
                return
            }
            
            do {
                let json = try JSONSerialization.jsonObject(with: data!, options: [])  // json is dictionary
                let dictionary = json as! [String: Any]
                self.mediaClips = [MediaClip]()

                if let mediaclips = dictionary["items"] {
//                    for mediaclip in mediaclips as! [[String: Any]] {
//                        let clip = MediaClip()
//                        clip.id = mediaclip["id"] as? String
//                        clip.title = mediaclip["title"] as? String
//                        clip.description = mediaclip["description"] as? String
//                        
//                        clip.thumbnailImageUrl = "https://bb.dev.bbvms.com/mediaclip/\(mediaclip["id"] ?? "")/pthumbnail/default/default.jpg?scalingMode=cover"
//                        
//                        self.mediaClips?.append(clip)
//                    }
                    DispatchQueue.main.async { [weak self] in
                       self?.collectionView.reloadData()
                    }
                }
                
            } catch let jsonError{
              print("JSON parse error: \(jsonError)")
            }
        })
        task.resume()
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        fetchVideos()

        collectionView?.backgroundColor = .white
        
        collectionView?.register(VideoCell.self, forCellWithReuseIdentifier: "cellId")
        
        collectionView?.contentInset = UIEdgeInsets(top: 0, left: 0, bottom: 0, right: 0)
        collectionView?.scrollIndicatorInsets = UIEdgeInsets(top: 0, left: 0, bottom: 0, right: 0)
        
        let tap: UITapGestureRecognizer = UITapGestureRecognizer(target: self, action: #selector(didTap))
        tap.numberOfTapsRequired = 1
        self.collectionView.addGestureRecognizer(tap)
    }
    
    override func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return mediaClips?.count ?? 0
    }
    
    override func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        let cell = collectionView.dequeueReusableCell(withReuseIdentifier: "cellId", for: indexPath) as! VideoCell
        
        cell.mediaClip = mediaClips?[indexPath.item]
        return cell
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAt indexPath: IndexPath) -> CGSize {
        let height = (view.frame.width - 16 - 16) * 9 / 16
        return CGSize(width: view.frame.width, height: height + 16 + 88)
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumLineSpacingForSectionAt section: Int) -> CGFloat {
        return 0
    }
    
    @objc func didTap(gesture: UITapGestureRecognizer) {

        let point: CGPoint = gesture.location(in: self.collectionView)

        if let selectedIndexPath: IndexPath = self.collectionView.indexPathForItem(at: point) {
            let selectedCell: UICollectionViewCell = self.collectionView.cellForItem(at: selectedIndexPath as IndexPath)!
            print("cell \(selectedCell) was tapped")
            let cell = selectedCell as! VideoCell
            if let clipId = cell.mediaClip?.id {
                let url = "https://bb.dev.bbvms.com/p/default/c/\(clipId).json"
                ShowVideo(url: url)
            }
        }
    }
    
    func ShowVideo( url: String) {
        let height = (view.frame.width - 16 - 16) * 9 / 16
        let frame: CGRect = CGRect(x: 0, y:0, width: view.frame.width, height: height + 16 + 88)
        let bbPlayerView = BBNativePlayer.createPlayerView(frame: frame, jsonUrl: url)
        bbPlayerView.presentModal(uiViewContoller: self, animated: true)
    }
}
