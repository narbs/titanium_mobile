/**
 * Titanium SDK
 * Copyright TiDev, Inc. 04/07/2022-Present. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#ifdef USE_TI_UIIOSSTEPPER
#import <TitaniumKit/TiUIView.h>

@interface TiUIiOSStepper : TiUIView {
  @private
  UIStepper *stepper;
  UIImage *backgroundImageCache;
  bool touchStarted;
}
- (UIStepper *)stepper;
@end
#endif
