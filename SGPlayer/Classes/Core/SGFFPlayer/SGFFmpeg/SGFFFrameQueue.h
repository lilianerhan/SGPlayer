//
//  SGFFFrameQueue.h
//  SGPlayer
//
//  Created by Single on 18/01/2017.
//  Copyright © 2017 single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SGFFFrame.h"

@interface SGFFFrameQueue : NSObject

+ (instancetype)frameQueue;

+ (NSTimeInterval)maxVideoDuration;

+ (NSTimeInterval)sleepTimeIntervalForFull;
+ (NSTimeInterval)sleepTimeIntervalForFullAndPaused;

@property (nonatomic, assign, readonly) int size;
@property (nonatomic, assign, readonly) NSUInteger count;
@property (atomic, assign, readonly) NSTimeInterval duration;

- (void)putFrame:(__kindof SGFFFrame *)frame;
- (void)putSortFrame:(__kindof SGFFFrame *)frame;
- (__kindof SGFFFrame *)getFrameSync;
- (__kindof SGFFFrame *)getFrameAsync;

- (void)flush;
- (void)destroy;

@end
