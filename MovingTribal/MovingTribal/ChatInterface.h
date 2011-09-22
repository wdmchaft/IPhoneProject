//
//  ChatInterface.h
//  MovingTribal
//
//  Created by Lee Abel on 9/14/11.
//  Copyright 2011 Abel Lee. All rights reserved.
//

#import "InterfaceDelegate.h"

@interface ChatInterface : UIViewController{
    id<InterfaceDelegate> delegate;
    
//    UIScrollView* scrollView;
//    UIView* chatList;
//    UITextField* chatInput;
//    UIView* topBackground;
//    UIView* bottomBackground;
    
    UserData* userData;
}

@property (nonatomic, retain) id<InterfaceDelegate> delegate;

//@property (nonatomic, retain) UIScrollView* scrollView;
//@property (nonatomic, retain) UITextField* chatInput;
//@property (nonatomic, retain) UIView* topBackground;
//@property (nonatomic, retain) UIView* bottomBackground;

@property (nonatomic, assign, getter = userData, setter = userData:) UserData* userData;

- (void)initInterface;

@end
