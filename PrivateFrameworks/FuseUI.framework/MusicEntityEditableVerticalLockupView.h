/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityEditableVerticalLockupView : MusicEntityVerticalLockupView {
    UIView * _artworkEditingOverlayView;
    MusicNowPlayingFloatingButton * _cameraButton;
    bool  _editing;
}

@property (nonatomic) <MusicEntityEditableVerticalLockupViewDelegate> *delegate;
@property (getter=isEditing, nonatomic) bool editing;

- (void).cxx_destruct;
- (void)_cameraButtonTapped:(id)arg1;
- (void)_layoutEditingSubviews;
- (void)_layoutEditingSubviewsForEditing:(bool)arg1 editingViewsAlpha:(double)arg2;
- (void)dealloc;
- (bool)isEditing;
- (void)layoutSubviews;
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;

@end