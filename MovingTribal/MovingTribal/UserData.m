//
//  UserData.m
//  MovingTribal
//
//  Created by Lee Abel on 9/18/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "UserData.h"

@implementation UserData

@synthesize uid;
@synthesize weiboId;
@synthesize username;

- (id)init
{
    self = [super init];
    if (self) {
        // Initialization code here.
    }
    
    return self;
}

- (void)dealloc
{
    NSLog(@"******| UserData |****** receive dealloc message!");
    [weiboId release];
    [username release];
    [super dealloc];
}

- (int)uid
{
    return uid;
}

- (void)uid:(int)value
{
    if(value != uid) uid = value;
}

- (NSString *)weiboId
{
    return weiboId;
}

- (void)weiboId:(NSString *)str
{
    if(str != weiboId){
        NSString* tempStr = weiboId;
        weiboId = [str copy];
        [tempStr release];
    }
}

- (NSString *)username
{
    return username;
}

- (void)username:(NSString *)str
{
    if(str != username){
        NSString* tempStr = username;
        username = [str copy];
        [tempStr release];
    }
}

@end