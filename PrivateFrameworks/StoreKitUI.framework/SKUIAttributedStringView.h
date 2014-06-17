/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor, SKUIAttributedStringLayout;

@interface SKUIAttributedStringView : UIView  {
    double _calculatedTopInset;
    long long _firstLineTopInset;
    SKUIAttributedStringLayout *_layout;
    UIColor *_textColor;
}

@property(readonly) double baselineOffset;
@property long long firstLineTopInset;
@property(retain) SKUIAttributedStringLayout * layout;
@property(retain) UIColor * textColor;


- (long long)firstLineTopInset;
- (void)setFirstLineTopInset:(long long)arg1;
- (void)_reloadTopInset;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)baselineOffset;
- (void)setLayout:(id)arg1;
- (id)layout;
- (void).cxx_destruct;
- (id)description;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end