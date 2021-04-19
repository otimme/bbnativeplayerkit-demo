import UIKit
import BBNativePlayerKit
import AVFoundation
import AVKit
import bbnativeshared

class TabAPIUIViewController: UIViewController, UIPickerViewDelegate, UIPickerViewDataSource {
    
    @IBOutlet weak var APIAction: UIPickerView!
    
    private var bbPlayerView: BBNativePlayerView? = nil
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Connect data:
        APIAction.delegate = self
        APIAction.dataSource = self

        bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://bb.dev.bbvms.com/p/puc_click_to_play/c/1092747.json") // verical 1084217  1092747
        // bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://bb.dev.bbvms.com/p/default/c/1092747.json") // verical 1084217  1092747
        bbPlayerView?.nativeControls = true

        view.addSubview(bbPlayerView!)
        bbPlayerView?.translatesAutoresizingMaskIntoConstraints = false
        bbPlayerView?.leftAnchor.constraint(equalTo: view.safeAreaLayoutGuide.leftAnchor).isActive = true
        bbPlayerView?.topAnchor.constraint(equalTo: view.safeAreaLayoutGuide.topAnchor, constant: 50 ).isActive = true
        bbPlayerView?.rightAnchor.constraint(equalTo: view.safeAreaLayoutGuide.rightAnchor).isActive = true
        bbPlayerView?.heightAnchor.constraint(equalToConstant: self.view.frame.size.width * 9/16).isActive = true
        
        bbPlayerView!.delegate = self
    }
    

    func VideoModal() {
        bbPlayerView = BBNativePlayer.createPlayerView(frame: view.frame, jsonUrl: "https://bb.dev.bbvms.com/p/puc_click_to_play/c/1092747.json")
        bbPlayerView?.nativeControls = true
        bbPlayerView?.presentModal(uiViewContoller: self, animated: true)
    }
        
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
    
    private var APIActions: [String] = ["Select API method", "Play", "Pause", "Load", "GetThumnailUrlString", "getAssets", "getClipData", "getCurrentTime", "getDeeplink", "getDuration", "getMuted", "getPhase", "isPlaying", "getPlayoutData", "getProjectData"]
    
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
                showValue(title: "Phase", message: "\(String(describing: bbPlayerView?.getPhase()))")
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
    }
    
    func addToEventDebug( _ message: String ) {
        debugUITextView.text.append(message + "\n")
        let range = NSMakeRange((debugUITextView.text.count) - 1, 0)
        debugUITextView.scrollRangeToVisible(range)
    }
}

extension TabAPIUIViewController: BBNativePlayerViewDelegate {
    
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
