//
//  NIMQChatPermissionStatusInfo.h
//  NIMLib
//
//  Created by Netease.
//  Copyright © 2022 Netease. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NIMQChatDefs.h"

NS_ASSUME_NONNULL_BEGIN


@interface NIMQChatPermissionStatusInfo : NSObject<NSCopying>
/**
 * 权限
 */
@property (nonatomic, assign) NIMQChatPermissionType type;
/**
 * 权限状态
 */
@property (nonatomic, assign) NIMQChatPermissionStatus status;

@end

NS_ASSUME_NONNULL_END
