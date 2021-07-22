import UIKit
import BBNativePlayerKit
import AVFoundation
import AVKit
import bbnativeshared

class APIUIViewController: UIViewController, UIPickerViewDelegate, UIPickerViewDataSource {
    
    @IBOutlet weak var APIActionUIPickerView: UIPickerView!
    
    private var bbPlayerView: BBNativePlayerView? = nil
    lazy var playerHeightConstraint = bbPlayerView?.heightAnchor.constraint(equalToConstant: view.safeAreaLayoutGuide.layoutFrame.width * 9/16)
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Connect data to UIPickerView:
        APIActionUIPickerView.dataSource = self
        APIActionUIPickerView.delegate = self

        // create player view using the embed url
        bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://demo.bbvms.com/p/default/c/4256600.json")
        
        // use constraints to place and size the player view
        view.addSubview(bbPlayerView!)
        bbPlayerView?.translatesAutoresizingMaskIntoConstraints = false
        bbPlayerView?.leftAnchor.constraint(equalTo: view.safeAreaLayoutGuide.leftAnchor).isActive = true
        bbPlayerView?.topAnchor.constraint(equalTo: view.safeAreaLayoutGuide.topAnchor, constant: 0 ).isActive = true
        bbPlayerView?.widthAnchor.constraint(equalTo: view.safeAreaLayoutGuide.widthAnchor).isActive = true
        if ( view.safeAreaLayoutGuide.layoutFrame.width > view.safeAreaLayoutGuide.layoutFrame.height ) {
            self.playerHeightConstraint?.constant = self.view.safeAreaLayoutGuide.layoutFrame.height
        } else {
            self.playerHeightConstraint?.constant = self.view.safeAreaLayoutGuide.layoutFrame.width * 9/16
        }
        playerHeightConstraint?.isActive = true
        
        // set class to delegate of player view
        bbPlayerView?.delegate = self
    }
    
    func VideoModal() {
        bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://demo.bbvms.com/p/default/c/4256615.json")
        bbPlayerView?.presentModal(uiViewContoller: self, animated: true)
    }
    
    //MARK: - API TESTS UI ELEMENTS
    @IBOutlet weak var debugTextLabel: UILabel!
    @IBOutlet weak var debugUIText: UITextField!
    @IBOutlet weak var debugUITextView: UITextView!
    
    
    
    //MARK: - UIPickerView
    func numberOfComponents(in pickerView: UIPickerView) -> Int {
        return 1
    }
    
    func pickerView(_ pickerView: UIPickerView, numberOfRowsInComponent component: Int) -> Int {
        return APIActions.count
    }
    
    // The data to return for the row and component (column) that's being passed in
    func pickerView(_ pickerView: UIPickerView, titleForRow row: Int, forComponent component: Int) -> String? {
       return APIActions[row]
    }
    
    private var APIActions: [String] = ["Select API method", "Play", "Pause", "Seek", "Mute", "Unmute", "Load","getMuted", "getDuration", "getPhase", "getState", "getMode", "getClipData", "getPlayoutData", "getProjectData", "getVolume", "OpenModalPlayer"]
    
    // Capture the picker view selection
    func pickerView(_ pickerView: UIPickerView, didSelectRow row: Int, inComponent component: Int) {
        // This method is triggered whenever the user makes a change to the picker selection.
        // The parameter named row and component represents what was selected.
    switch APIActions[row] {
        case "Fullscreen":
            bbPlayerView?.setApiProperty(property: .fullscreen, value: true)
            break
        case "RetractFullscreen":
            bbPlayerView?.setApiProperty(property: .fullscreen, value: false)
            break
        case "Play":
            bbPlayerView?.callApiMethod(method: .play, args: nil)
            break
        case "Pause":
            bbPlayerView?.callApiMethod(method: .pause, args: nil)
            break
        case "Seek":
            bbPlayerView?.callApiMethod(method: .seek, args: ["offsetInSeconds": 10])
            break
        case "Mute":
            bbPlayerView?.setApiProperty(property: .muted, value: true)
            break
        case "Unmute":
            bbPlayerView?.setApiProperty(property: .muted, value: false)
            break
        case "Load":
            bbPlayerView?.callApiMethod(method: .load_, args: ["clipId": "1084217", "autoPlay": true])
            break
        case "getClipData":
            if let mediaClip: MediaClip = bbPlayerView?.getApiProperty(property: .clipdata) as? MediaClip {
                showValue(title: "Clip id", message: mediaClip.id!)
            } else {
                showValue(title: "Data", message: "Not available atm")
            }
            break
        case "getDuration":
            if ( bbPlayerView?.getApiProperty(property: .duration) != nil ) {
                showValue(title: "Duration", message: "\(String(describing: bbPlayerView?.getApiProperty(property: .duration)))")
            } else {
                showValue(title: "Data", message: "Not available atm")
            }
            break
        case "getMuted":
            if let muted: Bool = bbPlayerView?.getApiProperty(property: .muted) as? Bool {
                showValue(title: "Muted?", message: String(muted))
            } else {
                showValue(title: "Data", message: "Not available atm")
            }
            break
        case "getPhase":
            if let phase: Phase = bbPlayerView?.getApiProperty(property: .phase) as? Phase {
                showValue(title: "Phase", message: "\(String(describing: phase))")
            }
            if ( bbPlayerView?.getApiProperty(property: .phase) != nil ) {
                
            } else {
                showValue(title: "Data", message: "Not available atm")
            }
            break
        case "getState":
            if let state: State = bbPlayerView?.getApiProperty(property: .state) as? State {
                showValue(title: "State", message: "\(String(describing: state))")
            } else {
                showValue(title: "Data", message: "Not available atm")
            }
            break
        case "getMode":
            if let mode: String = bbPlayerView?.getApiProperty(property: .mode) as? String {
                showValue(title: "Mode", message: "\(String(describing: mode))")
            } else {
                showValue(title: "Data", message: "Not available atm")
            }
            break
        case "getPlayoutData":
            if let playout: Playout = bbPlayerView?.getApiProperty(property: .playoutdata) as? Playout {
                showValue(title: "Playout name", message: playout.name!)
            } else {
                showValue(title: "Data", message: "Not available atm")
            }
            break
        case "getProjectData":
            if let project: Project = bbPlayerView?.getApiProperty(property: .projectdata) as? Project {
                showValue(title: "Project name", message: project.name!)
            } else {
                showValue(title: "Data", message: "Not available atm")
            }
            break
            
        case "getVolume":
            if let volume: Float = bbPlayerView?.getApiProperty(property: .volume) as? Float {
                showValue(title: "Project name", message: "\(volume)")
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
    
    //MARK: - Debug Info in UI
    func showValue(title: String, message: String) {
        debugTextLabel.text = title
        debugUIText.text = message
    }
    
    func addToEventDebug( _ message: String ) {
        debugUITextView.text.append(message + "\n")
        let range = NSMakeRange((debugUITextView.text.count) - 1, 0)
        debugUITextView.scrollRangeToVisible(range)
    }
    
    //MARK: - Handle rotation
    override func viewWillTransition(to size: CGSize, with coordinator: UIViewControllerTransitionCoordinator) {
        super.viewWillTransition(to: size, with: coordinator)
        
        if UIDevice.current.orientation.isLandscape {
            DispatchQueue.main.async {
                self.playerHeightConstraint?.constant = self.view.safeAreaLayoutGuide.layoutFrame.height
            }
        } else {
            DispatchQueue.main.async {
                self.playerHeightConstraint?.constant = self.view.safeAreaLayoutGuide.layoutFrame.width * 9/16
            }
        }
    }
}




//MARK: - BBNativePlayerViewDelegate in extension

//Implements BBNativePlayerViewDelegate to receive all API events and logs them in the DebugUITextView
extension APIUIViewController: BBNativePlayerViewDelegate {
    
    func didSetupWithJson(url: String?) {
        addToEventDebug("Player API Delegate: didSetupWithJson")
    }
    
    func didTriggerMediaClipLoaded(data: MediaClip) {
        addToEventDebug("Player API Delegate: didTriggerMediaClipLoaded")
    }

    func didTriggerMediaClipFailed() {
        addToEventDebug("Player API Delegate: didTriggerMediaClipFailed")
    }
    
    func didTriggerViewStarted() {
        addToEventDebug("Player API Delegate: didTriggerViewStarted")
    }
    
    func didTriggerViewFinished() {
        addToEventDebug("Player API Delegate: didTriggerViewFinished")
    }
    
    func didTriggerProjectLoaded(data: Project) {
        addToEventDebug("Player API Delegate: didTriggerProjectLoaded")
    }
    
    func didTriggerCanPlay() {
        addToEventDebug("Player API Delegate: didTriggerCanPlay")
    }
    
    func didTriggerDurationChange(duration: Double) {
        addToEventDebug("Player API Delegate: didTriggerDurationChange : \(duration)")
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
    
    func didTriggerSeeked(seekOffset: Double) {
        addToEventDebug("Player API Delegate: didTriggerSeeked : \(seekOffset)")
    }
    
    func didTriggerStall() {
        addToEventDebug("Player API Delegate: didTriggerStall")
    }
    
    func didTriggerAutoPause() {
        addToEventDebug("Player API Delegate: didTriggerAutoPause")
    }
    
    func didTriggerAutoPausePlay() {
        addToEventDebug("Player API Delegate: didTriggerAutoPausePlay")
    }
    
    func didFailWithError() {
        addToEventDebug("Player API Delegate: didFailWithError")
    }
    
    func didTriggerAdError(error: String?) {
        addToEventDebug("Player API Delegate: didTriggerAdError : \(String(describing: error))")
    }

    func didTriggerResized(dimensions: String?, fullscreen: Bool) {
        addToEventDebug("Player API Delegate: apiDidTriggerResized('\(String(describing: dimensions))', \(fullscreen))")
    }
    
    func didTriggerPhaseChange(phase: Phase?) {
        addToEventDebug("Player API Delegate: didTriggerPhaseChange : \(String(describing: phase))")
    }
    
    func didTriggerStateChange(state: State?) {
        addToEventDebug("Player API Delegate: didTriggerStateChange : \(String(describing: state))")
    }
    
    func didRequestOpenUrl(url: String?) {
        addToEventDebug("Player API Delegate: didRequestOpenUrl : \(String(describing: url))")
    }
}
