/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAwaySystemAlertCell.h"
#import "SpringBoard-Structs.h"


@interface SBAwaySystemAlertFloatingCell : SBAwaySystemAlertCell {
}
+(float)_rowHeightForContentHeight:(float)contentHeight;
+(float)rowHeightForTitle:(id)title message:(id)message rowWidth:(float)width buttonLabels:(id)labels;
+(id)_alarmButtonBackgroundImage;
+(id)_buttonBackgroundImage;
+(id)_cancelButtonBackgroundImage;
+(id)_buttonFont;
+(float)_buttonHorizontalInset;
+(float)_buttonVerticalInset;
+(float)_cellContentLeftPadding;
+(float)_cellContentRightPadding;
+(float)_cellContentTopPadding;
+(float)_cellContentExtraPadding;
-(void)_createContentView;
-(BOOL)_hasBackgroundColor;
-(void)setIconImage:(id)image;
-(void)setButtonLabels:(id)labels handler:(id)handler isAlarm:(BOOL)alarm;
-(BOOL)_drawsSeparator;
-(CGRect)_contentRect;
-(CGRect)_cellContentViewFrame;
-(void)_getButtonWidth:(float*)width inset:(float*)inset;
-(void)_clearButtonHandler;
-(void)layoutSubviews;
@end

