//
//  OddsAre.h
//  OddsAre
//
//  Created by Curt Clifton on 1/30/13.
//  Copyright (c) 2013 curtclifton.net. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CCOAWorldState, CCOAAccumulator;

@interface CCOAOddsAre : NSObject
+ (id <CCOAAccumulator>)generateOutcomesFromWorldState:(id <CCOAWorldState>)initialState accumulator:(id <CCOAAccumulator>)accumulator;
@end
