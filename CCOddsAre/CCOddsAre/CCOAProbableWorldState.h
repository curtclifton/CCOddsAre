//
//  CCOAProbableWorldState.h
//  OddsAre
//
//  Created by Curt Clifton on 1/30/13.
//  Copyright (c) 2013 curtclifton.net. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CCOAWorldState;

@interface CCOAProbableWorldState : NSObject
@property (nonatomic,readonly) CGFloat probability;
@property (nonatomic,strong,readonly) id <CCOAWorldState> worldState;

@end
