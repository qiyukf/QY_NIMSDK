//
//  NIMQChatServerManagerProtocol.h
//  NIMLib
//
//  Created by Netease.
//  Copyright © 2022 Netease. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "NIMQChatDefs.h"

NS_ASSUME_NONNULL_BEGIN

@class NIMQChatServerMember;

@class NIMQChatCreateServerParam;
@class NIMQChatDeleteServerParam;
@class NIMQChatUpdateServerParam;
@class NIMQChatGetServersParam;
@class NIMQChatGetServersByPageParam;
@class NIMQChatInviteServerMembersParam;
@class NIMQChatAcceptServerInviteParam;
@class NIMQChatRejectServerInviteParam;
@class NIMQChatApplyServerJoinParam;
@class NIMQChatAcceptServerApplyParam;
@class NIMQChatRejectServerApplyParam;
@class NIMQChatKickServerMembersParam;
@class NIMQChatLeaveServerParam;
@class NIMQChatUpdateMyMemberInfoParam;
@class NIMQChatUpdateServerMemberInfoParam;
@class NIMQChatGetServerMembersParam;
@class NIMQChatGetServerMembersByPageParam;
@class NIMQChatUpdateServerMemberBanParam;
@class NIMQChatGetServerBanedMembersByPageParam;

@class NIMQChatCreateServerResult;
@class NIMQChatUpdateServerResult;
@class NIMQChatGetServersResult;
@class NIMQChatGetServersByPageResult;
@class NIMQChatGetServerMembersResult;
@class NIMQChatGetServerMemberListByPageResult;
@class NIMQChatSubscribeServerParam;
@class NIMQChatGetServerBanedMembersByPageResult;
@class NIMQChatInviteServerMembersResult;
@class NIMQChatSearchServerByPageResult;
@class NIMQChatSearchServerMemberByPageResult;
@class NIMQChatSearchServerByPageParam;
@class NIMQChatSearchServerMemberByPageParam;

/**
 * 创建服务器的回调
 *
 * @param error 错误信息
 * @param result 回调结果
 */
typedef void(^NIMQChatCreateServerHandler)(NSError *__nullable error, NIMQChatCreateServerResult *__nullable result);

/**
 * 修改服务器信息
 *
 * @param error 错误信息
 * @param result 回调结果
 */
typedef void(^NIMQChatUpdateServerHandler)(NSError *__nullable error, NIMQChatUpdateServerResult *__nullable result);

/**
 * 查询服务器信息的回调
 *
 * @param error 错误信息
 * @param result 回调结果
 */
typedef void(^NIMQChatGetServersHandler)(NSError *__nullable error, NIMQChatGetServersResult *__nullable result);

/**
 * 查询服务器信息列表的回调
 *
 * @param error 错误信息
 * @param result 回调结果
 */
typedef void(^NIMQChatGetServersByPageHandler)(NSError *__nullable error, NIMQChatGetServersByPageResult *__nullable result);

/**
 * 查询服务器成员信息的回调
 *
 * @param error 错误信息
 * @param result 回调结果
 */
typedef void(^NIMQChatGetServerMembersHandler)(NSError *__nullable error, NIMQChatGetServerMembersResult *__nullable result);
/**
 * 分页查询服务器成员信息的回调
 *
 * @param error 错误信息
 * @param result 回调结果
 */
typedef void(^NIMQChatGetServerMembersByPageHandler)(NSError *__nullable error, NIMQChatGetServerMemberListByPageResult *__nullable result);
/**
 * 更新服务器成员信息的回调
 *
 * @param error 错误信息
 * @param result 回调结果
 */
typedef void(^NIMQChatUpdateServerMemberHandler)(NSError *__nullable error, NIMQChatServerMember *__nullable result);

/**
 * 邀请服务器成员的回调
 *
 * @param error 错误信息
 * @param result 回调结果
 */
typedef void(^NIMQChatInviteServerMembersHandler)(NSError *__nullable error, NIMQChatInviteServerMembersResult *__nullable result);

typedef NIMQChatHandler NIMQChatUpdateServerMemberBanHandler;

/**
 *  分页查询封禁人员的回调
 *
 * @param error 错误信息
 * @param result 回调结果
 */
typedef void(^NIMQChatGetServerBanedMembersByPageHandler)(NSError *__nullable error, NIMQChatGetServerBanedMembersByPageResult *__nullable result);

/**
 *  分页检索服务器信息回调
 *
 * @param error 错误信息
 * @param result 回调结果
 */
typedef void(^NIMQChatSearchServerByPageHandler)(NSError *__nullable error, NIMQChatSearchServerByPageResult *__nullable result);

/**
 *  检索服务器用户信息回调
 *
 * @param error 错误信息
 * @param result 回调结果
 */
typedef void(^NIMQChatSearchServerMemberByPageHandler)(NSError *__nullable error, NIMQChatSearchServerMemberByPageResult *__nullable result);

/**
 *   圈组服务器管理器回调
 */
@protocol NIMQChatServerManagerDelegate <NSObject>

@optional

@end

/**
 *  圈组服务器管理器
 */
@protocol NIMQChatServerManager <NSObject>
/**
 * 创建服务器
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)createServer:(nonnull NIMQChatCreateServerParam *)param
          completion:(nullable NIMQChatCreateServerHandler)completion;

/**
 * 删除服务器
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)deleteServer:(nonnull NIMQChatDeleteServerParam *)param
          completion:(nullable NIMQChatHandler)completion;

/**
 * 修改服务器信息
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)updateServer:(nonnull NIMQChatUpdateServerParam *)param
          completion:(nullable NIMQChatUpdateServerHandler)completion;

/**
 * 查询服务器信息
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)getServers:(nonnull NIMQChatGetServersParam *)param
        completion:(nullable NIMQChatGetServersHandler)completion;

/**
 * 查询服务器信息列表
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)getServersByPage:(nonnull NIMQChatGetServersByPageParam *)param
              completion:(nullable NIMQChatGetServersByPageHandler)completion;

/**
 * 邀请服务器成员
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)inviteServerMembers:(nonnull NIMQChatInviteServerMembersParam *)param
                 completion:(nullable NIMQChatInviteServerMembersHandler)completion;

/**
 * 接受邀请
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)acceptServerInvite:(nonnull NIMQChatAcceptServerInviteParam *)param
                completion:(nullable NIMQChatHandler)completion;

/**
 * 拒绝邀请
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)rejectServerInvite:(nonnull NIMQChatRejectServerInviteParam *)param
                completion:(nullable NIMQChatHandler)completion;

/**
 * 申请加入服务器
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)applyServerJoin:(nonnull NIMQChatApplyServerJoinParam *)param
             completion:(nullable NIMQChatHandler)completion;

/**
 * 接受申请
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)acceptServerApply:(nonnull NIMQChatAcceptServerApplyParam *)param
               completion:(nullable NIMQChatHandler)completion;

/**
 * 拒绝申请
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)rejectServerApply:(nonnull NIMQChatRejectServerApplyParam *)param
               completion:(nullable NIMQChatHandler)completion;

/**
 * 踢除服务器成员
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)kickServerMembers:(NIMQChatKickServerMembersParam *)param
               completion:(nullable NIMQChatHandler)completion;

/**
 * 主动离开服务器
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)leaveServer:(NIMQChatLeaveServerParam *)param
         completion:(nullable NIMQChatHandler)completion;

/**
 * 修改服务器成员信息
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)updateMyMemberInfo:(NIMQChatUpdateMyMemberInfoParam *)param
                completion:(nullable NIMQChatUpdateServerMemberHandler)completion;

/**
 * 修改他人服务器成员信息
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)updateServerMemberInfo:(NIMQChatUpdateServerMemberInfoParam *)param
                    completion:(nullable NIMQChatUpdateServerMemberHandler)completion;

/**
 * 查询服务器成员信息
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)getServerMembers:(NIMQChatGetServerMembersParam *)param
              completion:(nullable NIMQChatGetServerMembersHandler)completion;

/**
 * 分页查询服务器成员信息
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)getServerMembersByPage:(NIMQChatGetServerMembersByPageParam *)param
                    completion:(nullable NIMQChatGetServerMembersByPageHandler)completion;

/**
 * 订阅服务器请求
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)subscribeServer:(NIMQChatSubscribeServerParam *)param
            completion:(nullable NIMQChatHandler)completion;

/**
 * 对服务器成员进行封禁操作
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)banServerMember:(NIMQChatUpdateServerMemberBanParam *)param
             completion:(nullable NIMQChatUpdateServerMemberBanHandler)completion;

/**
 * 对服务器成员进行解封操作
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)unbanServerMember:(NIMQChatUpdateServerMemberBanParam *)param
             completion:(nullable NIMQChatUpdateServerMemberBanHandler)completion;
/**
 *  分页获取封禁成员列表
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)getServerBanedMembersByPage:(NIMQChatGetServerBanedMembersByPageParam *)param completion:(nullable NIMQChatGetServerBanedMembersByPageHandler)completion;

/**
 * 检索服务器列表
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)searchServerByPage:(NIMQChatSearchServerByPageParam *)param completion:(nullable NIMQChatSearchServerByPageHandler) completion;

/**
 * 检索服务器成员列表
 *
 * @param param 传入参数
 * @param completion 结果回调
 */
- (void)searchServerMemberByPage:(NIMQChatSearchServerMemberByPageParam *)param completion:(nullable NIMQChatSearchServerMemberByPageHandler) completion;

/**
 *  添加通知对象
 *
 *  @param delegate 通知对象
 */
- (void)addDelegate:(id<NIMQChatServerManagerDelegate>)delegate;

/**
 *  移除通知对象
 *
 *  @param delegate 通知对象
 */
- (void)removeDelegate:(id<NIMQChatServerManagerDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
