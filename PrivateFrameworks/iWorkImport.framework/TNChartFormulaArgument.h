/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartFormulaArgument : NSObject {
    void * mData;
    int  mType;
}

@property (readonly) struct { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; } cellReference;
@property (readonly) bool isBadRef;
@property (readonly) bool isCellReference;
@property (readonly) bool isRangeReference;
@property (readonly) bool isReference;
@property (readonly) bool isStaticValue;
@property (readonly) struct { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; } rangeReference;
@property (readonly) struct TSCEValue { unsigned long long x1[10]; int x2; }*staticValue;
@property (readonly) int type;

- (struct { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })cellReference;
- (void)dealloc;
- (id)description;
- (id)initWithBadRef;
- (id)initWithCellReference:(struct { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct __CFUUID {} *x2; })arg1;
- (id)initWithRangeReference:(struct { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1;
- (id)initWithStaticValue:(const struct TSCEValue { unsigned long long x1[10]; int x2; }*)arg1;
- (bool)isBadRef;
- (bool)isCellReference;
- (bool)isRangeReference;
- (bool)isReference;
- (bool)isStaticValue;
- (struct { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })rangeReference;
- (struct TSCEValue { unsigned long long x1[10]; int x2; }*)staticValue;
- (int)type;

@end
