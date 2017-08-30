//
//  ECBrokenLineNormalCollectionView.h
//  EasyCharts
//
//  Created by 宋永建 on 2017/8/26.
//  Copyright © 2017年 宋永建. All rights reserved.
//

#import "ECBrokenLineCollectionView.h"
#import "ECBrokenLineProtocol.h"

@class ECBrokenLineNormalCollectionView,ECBrokenLineConfig;
//@protocol BrokenLine2CollectionViewDataSource <NSObject>
//
//- (NSArray *)collectionViewPointYList:(ECBrokenLineNormalCollectionView *)collectionView;
//- (CGSize)collectionView:(ECBrokenLineNormalCollectionView *)collectionView
//  sizeForItemAtIndexPath:(NSIndexPath *)indexPath;
//
//@end
//
//@protocol BrokenLine2CollectionViewDelegate <NSObject>
//
//- (void)collectionViewPointYList:(ECBrokenLineNormalCollectionView *)collectionView
//        didSelectItemAtIndexPath:(NSIndexPath *)indexPath;
//
//@end

@interface ECBrokenLineNormalCollectionView : ECBrokenLineCollectionView <ECBrokenLineProtocol>

@property (nonatomic, weak) id<ECBrokenLineCollectionViewDataSource> drawLineDataSource;
@property (nonatomic, weak) id<ECBrokenLineCollectionViewDelegate> drawLineDelegate;

+ (instancetype)collectionViewWithFrame:(CGRect)frame
                   withBrokenLineConfig:(ECBrokenLineConfig *)brokenLineConfig;
- (void)reloadCollectionData;

@end


typedef  void (^ScrollIndexBlock)(NSInteger);

@interface BrokenLine2CollectionViewFlowLayout : UICollectionViewFlowLayout

@property (nonatomic, copy) ScrollIndexBlock indexBlock;

@end