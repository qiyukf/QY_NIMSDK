//
//  NIMMessageReceipt.h
//  NIMLib
//
//  Created by Netease.
//  Copyright © 2016 Netease. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class NIMSession;
@class NIMMessage;
@class NIMTeamMessageReceipt;

/**
 *  已读回执
 */
@interface NIMMessageReceipt : NSObject

/**
 *  已读回执对应的会话
 */
@property (nullable,nonatomic,copy,readonly)   NIMSession  *session;

/**
 *  时间戳
 *  @discussion 发送已读回执时,这个字段需要被设置为当前会话中的最后一条消息时间戳
 *              接受已读回执时,这个字段表示在这个时间戳之前的消息都已读
 *              此字段支持 P2P 会话类型
 */
@property (nonatomic,assign,readonly)    NSTimeInterval  timestamp;


/**
 *  消息 Id
 *  @discussion 只有 Team 会话有效，表示已读的这条消息的 Id
 */
@property (nonatomic,copy,readonly)      NSString    *messageId;

/**
 * 群已读回执相关信息
 */
@property (nonatomic,strong,readonly)    NIMTeamMessageReceipt    *teamReceiptInfo;



/**
 *  通过最后一条消息构造已读回执
 *
 *  @param message 会话中的最后一条消息
 *
 *  @return 已读回执实例
 */
- (instancetype)initWithMessage:(NIMMessage *)message;

@end

NS_ASSUME_NONNULL_END
