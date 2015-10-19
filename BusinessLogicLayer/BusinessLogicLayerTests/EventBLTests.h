//
//  EventBLTests.h
//  BusinessLogicLayer
//
//  Created by kevin on 15/10/19.
//  Copyright © 2015年 tonyguan. All rights reserved.
//

#ifndef EventBLTests_h
#define EventBLTests_h

#import <XCTest/XCTest.h>

@interface EventsBLTests : XCTestCase {}

@property (nonatomic,strong) EventsBL * bl;
@property (nonatomic,strong) Events * theEvents;

- (void)setUp;
- (void)tearDown;
- (void)testFindAll;
@end
#endif /* EventBLTests_h */
