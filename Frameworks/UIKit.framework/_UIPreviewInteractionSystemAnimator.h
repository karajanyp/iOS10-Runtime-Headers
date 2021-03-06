/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewInteractionSystemAnimator : NSObject <UIPreviewInteractionAnimating, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, _UIDynamicReferenceSystem> {
    bool  _animationsAreStopped;
    UIViewPropertyAnimator * _cancelAnimation;
    id /* block */  _cancelAnimationsBlock;
    id /* block */  _cancelCompletionBlock;
    UIViewPropertyAnimator * _commitAnimation;
    id  _commitAnimationsBlock;
    id  _commitCompletionBlock;
    UIDynamicAnimator * _containerViewAnimator;
    UIPushBehavior * _containerViewForceBehavior;
    UIDynamicItemBehavior * _containerViewItemProperties;
    _UISpringBehavior * _containerViewSpringBehavior;
    _UIDynamicTransformer * _containerViewTransformer;
    NSArray * _containerViews;
    double  _damping;
    double  _density;
    double  _forceFactor;
    double  _frequency;
    UIViewPropertyAnimator * _interactiveHighlightAnimation;
    id /* block */  _interactiveHighlightAnimationsBlock;
    id /* block */  _interactiveHighlightCompletionBlock;
    double  _interactiveHighlightForceFactor;
    UIViewPropertyAnimator * _previewAnimation;
    id /* block */  _previewAnimationsBlock;
    id /* block */  _previewCompletionBlock;
    double  _progressToPreview;
    double  _resistance;
    long long  _targetState;
    double  _touchForce;
    double  _touchForceVelocity;
    <UIViewControllerContextTransitioning> * _transitionContext;
    bool  _viewControllerDismissTransition;
    bool  _viewControllerTransition;
}

@property (nonatomic, retain) UIViewPropertyAnimator *cancelAnimation;
@property (nonatomic, copy) id /* block */ cancelAnimationsBlock;
@property (nonatomic, copy) id /* block */ cancelCompletionBlock;
@property (nonatomic, retain) UIViewPropertyAnimator *commitAnimation;
@property (nonatomic, copy) id commitAnimationsBlock;
@property (nonatomic, copy) id commitCompletionBlock;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionSpeed;
@property (nonatomic, copy) NSArray *containerViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewPropertyAnimator *interactiveHighlightAnimation;
@property (nonatomic, copy) id /* block */ interactiveHighlightAnimationsBlock;
@property (nonatomic, copy) id /* block */ interactiveHighlightCompletionBlock;
@property (nonatomic, retain) UIViewPropertyAnimator *previewAnimation;
@property (nonatomic, copy) id /* block */ previewAnimationsBlock;
@property (nonatomic, copy) id /* block */ previewCompletionBlock;
@property (nonatomic) double progressToPreview;
@property (getter=isStopped, nonatomic, readonly) bool stopped;
@property (readonly) Class superclass;
@property (nonatomic) long long targetState;
@property (nonatomic) double touchForce;
@property (nonatomic) double touchForceVelocity;
@property (getter=isViewControllerTransition, nonatomic) bool viewControllerTransition;
@property (nonatomic, readonly) bool wantsInteractiveStart;

- (void).cxx_destruct;
- (bool)_animationsShouldWaitForViewControllerTransition;
- (void)_cancelAnimationDidEnd:(bool)arg1;
- (void)_performCancelAnimationIfNeeded;
- (void)_performCommitAnimationIfNeeded;
- (void)_performPreviewAnimationIfNeeded;
- (void)_prepareAnimationsIfNeeded;
- (void)_prepareContainerViewAnimatorIfNeeded;
- (void)_prepareInteractiveHighlightAnimationIfNeeded;
- (void)_previewAnimationDidEnd:(bool)arg1;
- (void)_previewInteractiveHighlightDidEnd:(bool)arg1;
- (void)_stopContainerViewAnimations;
- (void)_updateContainerViewAnimatorIfNeeded;
- (void)_updateContainerViewFromTransformer:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)cancelAnimation;
- (id /* block */)cancelAnimationsBlock;
- (id /* block */)cancelCompletionBlock;
- (id)commitAnimation;
- (id)commitAnimationsBlock;
- (id)commitCompletionBlock;
- (id)containerViews;
- (id)init;
- (id)interactiveHighlightAnimation;
- (id /* block */)interactiveHighlightAnimationsBlock;
- (id /* block */)interactiveHighlightCompletionBlock;
- (bool)isStopped;
- (bool)isViewControllerTransition;
- (id)previewAnimation;
- (id /* block */)previewAnimationsBlock;
- (id /* block */)previewCompletionBlock;
- (double)progressToPreview;
- (void)setAnimationsForCancel:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)setAnimationsForCommit:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)setAnimationsForInteractiveHighlight:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)setAnimationsForPreview:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)setCancelAnimation:(id)arg1;
- (void)setCancelAnimationsBlock:(id /* block */)arg1;
- (void)setCancelCompletionBlock:(id /* block */)arg1;
- (void)setCommitAnimation:(id)arg1;
- (void)setCommitAnimationsBlock:(id)arg1;
- (void)setCommitCompletionBlock:(id)arg1;
- (void)setContainerViews:(id)arg1;
- (void)setInteractiveHighlightAnimation:(id)arg1;
- (void)setInteractiveHighlightAnimationsBlock:(id /* block */)arg1;
- (void)setInteractiveHighlightCompletionBlock:(id /* block */)arg1;
- (void)setPreviewAnimation:(id)arg1;
- (void)setPreviewAnimationsBlock:(id /* block */)arg1;
- (void)setPreviewCompletionBlock:(id /* block */)arg1;
- (void)setProgressToPreview:(double)arg1;
- (void)setTargetState:(long long)arg1;
- (void)setTouchForce:(double)arg1;
- (void)setTouchForceVelocity:(double)arg1;
- (void)setViewControllerTransition:(bool)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)stopAnimations;
- (long long)targetState;
- (double)touchForce;
- (double)touchForceVelocity;
- (double)transitionDuration:(id)arg1;

@end
