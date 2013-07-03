/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSArray;

@interface AFSpeechPhrase : NSObject <NSSecureCoding> {
    BOOL _isLowConfidence;
    NSArray *_interpretations;
}

@property(copy) NSArray * interpretations;
@property BOOL isLowConfidence;

+ (BOOL)supportsSecureCoding;

- (void)setIsLowConfidence:(BOOL)arg1;
- (BOOL)isLowConfidence;
- (void)setInterpretations:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)interpretations;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end