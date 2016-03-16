//
//  ALImageCell.h
//  ChatApp
//
//  Created by shaik riyaz on 22/08/15.
//  Copyright (c) 2015 AppLogic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ALMessage.h"
#import "KAProgressLabel.h"
#import "ALMediaBaseCell.h"



@interface ALImageCell : ALMediaBaseCell

-(instancetype)populateCell:(ALMessage*) alMessage viewSize:(CGSize)viewSize;

@property(strong,nonatomic) UITapGestureRecognizer *tapperForLocationMap;

@end