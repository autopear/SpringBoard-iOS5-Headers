/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSTimer, SBResetProgressView;

@interface SBResetView : XXUnknownSuperclass {
	SBResetProgressView* _progressView;
	NSTimer* _progressTimer;
}
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)_resetStarted:(id)started;
-(void)_resetFinished:(id)finished;
-(void)_updateProgress;
@end

