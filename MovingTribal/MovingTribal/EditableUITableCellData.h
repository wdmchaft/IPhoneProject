//
//  EditableUITableCellData.h
//  MovingTribal
//
//  Created by Lee Abel on 9/18/11.
//  Copyright 2011 Abel Lee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EditableUITableCellData : NSObject{
    NSString* label;
    NSString* placeholder;
    NSString* value;
	NSString* key;
	
    UIKeyboardType keyboardType;
    UIKeyboardAppearance keyboardAppearance;
    UIReturnKeyType returnKeyType;
	
    BOOL secureTextEntry;
    
    NSUInteger width;
    NSUInteger height;
	NSUInteger cellType;
	
	UIView* secondView;
	UIImage* image;
}

@property (nonatomic, assign, getter = label, setter = label:) NSString* label;
@property (nonatomic, assign, getter = placeholder, setter = placeholder:) NSString* placeholder;
@property (nonatomic, assign, getter = value, setter = value:) NSString* value;
@property (nonatomic, assign, getter = key, setter = key:) NSString* key;

@property (nonatomic, assign, getter = keyboardType, setter = keyboardType:) UIKeyboardType keyboardType;
@property (nonatomic, assign, getter = keyboardAppearance, setter = keyboardAppearance:) UIKeyboardAppearance keyboardAppearance;
@property (nonatomic, assign, getter = returnKeyType, setter = returnKeyType:) UIReturnKeyType returnKeyType;
@property (nonatomic, assign, getter = isSecureTextEntry, setter = isSecureTextEntry:) BOOL secureTextEntry;

@property (nonatomic, assign, getter = width, setter = width:) NSUInteger width;
@property (nonatomic, assign, getter = height, setter = height:) NSUInteger height;
@property (nonatomic, assign, getter = cellType, setter = cellType:) NSUInteger cellType;

@property (nonatomic, assign, getter = secondView, setter = secondView:) UIView* secondView;
@property (nonatomic, assign, getter = image, setter = image:) UIImage* image;

@end
