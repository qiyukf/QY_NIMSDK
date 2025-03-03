//
//  NIMQChatSubscribeParam.h
//  NIMSDK
//
//  Created by Netease.
//  Copyright © 2022 Netease. All rights reserved.
//

#import <Foundation/Foundation.h>

@class NIMQChatChannelIdInfo;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, NIMQChatSubscribeType) {

    /**
     * 订阅某个channel的【消息】/【通知】
     */
    NIMQChatSubscribeTypeChannelMsg = 1,
    /**
     * 订阅某个channel的【消息未读数】/【通知】
     */
    NIMQChatSubscribeTypeChannelMsgUnreadCount = 2,
    /**
     * 订阅某个channel的【消息未读状态】/【通知】
     */
    NIMQChatSubscribeTypeChannelMsgUnreadStatus = 3,
    /**
     * 订阅某个server的【消息】/【通知】，如server基本信息修改、人员进出、权限变更、创建channel等
     */
    NIMQChatSubscribeTypeServerMsg = 4,
    /**
     * 订阅某个channel的消息正在输入事件
     */
    NIMQChatSubscribeTypeChannelTypingEvent = 5,
};

typedef NS_ENUM(NSInteger, NIMQChatSubscribeOperationType) {
    /**
     * 订阅
     */
    NIMQChatSubscribeOperationTypeSubscribe = 1,
    /**
     * 取消订阅
     */
    NIMQChatSubscribeOperationTypeUnsubscribe = 2,
};

/**
 *  订阅服务器参数
 */
@interface NIMQChatSubscribeServerParam : NSObject
/**
 * 订阅类型
 */
@property (nonatomic, assign) NIMQChatSubscribeType subscribeType;
/**
 * 操作类型
 */
@property (nonatomic, assign) NIMQChatSubscribeOperationType operationType;
/**
 * 操作的对象：server列表
 */
@property (nonnull, nonatomic, copy) NSArray<NSNumber*> *targets;

@end

/**
 *  订阅频道参数
 */
@interface NIMQChatSubscribeChannelParam : NSObject
/**
 * 订阅类型
 */
@property (nonatomic, assign) NIMQChatSubscribeType subscribeType;
/**
 * 操作类型
 */
@property (nonatomic, assign) NIMQChatSubscribeOperationType operationType;
/**
 * 操作的对象：频道ID列表
 */
@property (nonnull, nonatomic, copy) NSArray<NIMQChatChannelIdInfo *> *targets;

@end

NS_ASSUME_NONNULL_END
