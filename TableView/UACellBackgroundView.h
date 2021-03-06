//
//  UACellBackgroundView.h
//  PSFoundation
//
//  Created by Matt Coneybeare on 1/31/10.
//  Copyright 2010 Urban Apps LLC. All rights reserved.
//

typedef enum  {
  UACellBackgroundViewPositionSingle = 0,
  UACellBackgroundViewPositionTop,
  UACellBackgroundViewPositionBottom,
  UACellBackgroundViewPositionMiddle
} UACellBackgroundViewPosition;

@interface UACellBackgroundView : UIView {
  UACellBackgroundViewPosition position;
  UIImage *backgroundImage;
}

@property(nonatomic) UACellBackgroundViewPosition position;
@property(nonatomic, retain) UIImage *backgroundImage;

@end
