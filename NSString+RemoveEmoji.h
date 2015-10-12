//
//  NSString+RemoveEmoji.h
//
//  Created by Renjith N on 12/10/15.
//  Copyright (c) 2015 Budding Developers. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (RemoveEmoji)

- (BOOL)isIncludingEmoji;

- (instancetype)removedEmojiString;

- (instancetype) removeEmojiAtTheEnd;

@end
