//
//  NIMQChatInviteServerMembersResult.h
//  NIMLib
//
//  Created by Netease.
//  Copyright © 2022 Netease. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  邀请成员的结果
 */
@interface NIMQChatInviteServerMembersResult : NSObject

/**
 * 超过限制失败的accids
 */
@property (nonatomic, copy) NSArray <NSString *> *ultralimitFailedArray;
/**
 * 因为封禁失败的accids
 */
@property (nonatomic, copy) NSArray <NSString *> *banedFailedArray;

@end

NS_ASSUME_NONNULL_END
