/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSString;

@interface NSURLCacheInternal : NSObject  {
    unsigned long long memoryCapacity;
    unsigned long long diskCapacity;
    NSString *diskPath;
    unsigned long long currentMemoryUsage;
    unsigned long long currentDiskUsage;
    struct _CFURLCache { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __CFURLCache {} *x2; } *_cacheRef;
}


- (void)finalize;
- (void)dealloc;

@end