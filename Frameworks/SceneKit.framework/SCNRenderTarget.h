/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNRenderTarget : NSObject {
    CIImage * _ciImage;
    struct { 
        unsigned char format; 
        unsigned char sampleCount; 
        unsigned char textureUsage; 
        unsigned int renderToTexture : 1; 
        unsigned int forceTextureRect : 1; 
        unsigned int viewportDependant : 1; 
        unsigned int renderToIOSurface : 1; 
        unsigned int mipmapped : 1; 
        unsigned char padding[4]; 
    }  _description;
    NSString * _name;
    long long  _referenceCount;
    void _size;
    id  _texture;
    long long  _timeStamp;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long referenceCount;
@property (nonatomic, readonly) unsigned char renderBufferFormat;
@property (nonatomic, retain) id texture;
@property (nonatomic) long long timeStamp;
@property (nonatomic, readonly) bool viewportDependant;

- (id)ciImage;
- (void)dealloc;
- (id)description;
- (id)initWithDescription:(void *)arg1 size:(void *)arg2; // needs 2 arg types, found 1: struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned char x9[4]; }*
- (bool)matchesDescription:(void *)arg1 size:(void *)arg2; // needs 2 arg types, found 1: struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned char x9[4]; }*
- (id)name;
- (long long)referenceCount;
- (unsigned char)renderBufferFormat;
- (void)setName:(id)arg1;
- (void)setReferenceCount:(long long)arg1;
- (void)setTexture:(id)arg1;
- (void)setTimeStamp:(long long)arg1;
- (id)texture;
- (long long)timeStamp;
- (bool)viewportDependant;

@end