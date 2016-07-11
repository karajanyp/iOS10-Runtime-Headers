/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITextAreaView : NUIContainerStackView <NUIContainerStackViewDelegate> {
    UILabel * _footnoteLabel;
    NSMutableArray * _richTextFields;
    unsigned long long  _style;
    SearchUITitleContainerView * _titleContainer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) UILabel *footnoteLabel;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableArray *richTextFields;
@property unsigned long long style;
@property (readonly) Class superclass;
@property (retain) SearchUITitleContainerView *titleContainer;

+ (id)footNoteLabelFont;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerStackView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })containerStackView:(id)arg1 minimumSpacingAdjecentToArrangedSubview:(id)arg2;
- (id)footnoteLabel;
- (id)initWithStyle:(unsigned long long)arg1;
- (bool)noFootNote;
- (bool)noRichTextFields;
- (id)richTextFields;
- (void)setFootnoteLabel:(id)arg1;
- (void)setRichTextFields:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTitleContainer:(id)arg1;
- (unsigned long long)style;
- (id)titleContainer;
- (void)updateWithResult:(id)arg1;

@end