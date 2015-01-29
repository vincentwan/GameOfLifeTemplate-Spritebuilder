//
//  Grid.h
//  GameOfLife
//
//  Created by 万欣 on 15/1/28.
//  Copyright (c) 2015年 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) NSMutableArray *_gridArray;
@property (nonatomic, assign) float _cellWidth;
@property (nonatomic, assign) float _cellHeight;
@property (nonatomic, assign) int _generation;
@property (nonatomic, assign) int _totalAlive;

- (void)evolveStep;
- (void)countNeighbors;
- (void)updateCreatures;

@end
