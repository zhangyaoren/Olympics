//
//  main.m
//  BusinessLogicLayer
//
//  Created by kevin on 15/10/19.
//  Copyright © 2015年 tonyguan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EventBLTests.h"

int main(int argc, char *argv[])
{
    
    EventsBLTests *tester = [[EventsBLTests alloc] init];
    
    [tester setUp];
    
    [tester testFindAll];
    
    [tester tearDown];
    
}