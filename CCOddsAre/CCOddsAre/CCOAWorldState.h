//
//  CCCOAWorldState.h
//  OddsAre
//
//  Created by Curt Clifton on 1/30/13.
//  Copyright (c) 2013 curtclifton.net. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CCOAWorldState <NSObject>
- (BOOL)isEndState;
- (NSArray *)possibleNextStates; // returns array of CCOAProbableWorldStates
@end
