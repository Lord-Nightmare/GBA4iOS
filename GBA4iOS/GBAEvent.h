//
//  GBAEvent.h
//  GBA4iOS
//
//  Created by Riley Testut on 1/29/14.
//  Copyright (c) 2014 Riley Testut. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, GBAEventSupportedGame) {
    GBAEventSupportedGameNone       = 0,
    GBAEventSupportedGameRuby       = 1 << 0,
    GBAEventSupportedGameSapphire   = 1 << 1,
    GBAEventSupportedGameFireRed    = 1 << 2,
    GBAEventSupportedGameLeafGreen  = 1 << 3,
    GBAEventSupportedGameEmerald    = 1 << 5
};

@interface GBAEvent : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *description;
@property (readonly, copy, nonatomic) NSString *detailedDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, assign, nonatomic) GBAEventSupportedGame supportedGames;
@property (readonly, assign, nonatomic) NSInteger apiVersion;

+ (instancetype)eventWithContentsOfFile:(NSString *)filepath;
+ (instancetype)eventWithDictionary:(NSDictionary *)dictionary;

- (void)writeToFile:(NSString *)filepath;

- (BOOL)supportsGame:(GBAEventSupportedGame)supportedGame;

@end
