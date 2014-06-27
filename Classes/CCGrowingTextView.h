//
//  CCGrowingTextView.h
//  GrowingTextViewExample
//
//  Created by ziryanov on 29/10/13.
//  Copyright (c) 2013 ziryanov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCGrowingTextView : UITextView

@property (nonatomic) NSString *placeholder;
@property (nonatomic) UIColor *placeholderColor UI_APPEARANCE_SELECTOR;

@property (nonatomic) NSUInteger maxNumberOfLine;
@property (nonatomic, assign) CGFloat maxHeight;

@end
