//
// Created by Netease on 2022/2/5.
// Copyright (c) 2022 Netease. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NIMQChatDefs.h"

@class NIMQChatServer;
@class NIMQChatServerMember;
@class NIMQChatChannel;
@class NIMQChatUpdateChannelBlackWhiteRoleInfo;
@class NIMQChatUpdateChannelBlackWhiteMembersInfo;
@class NIMQChatUpdateChannelCategoryBlackWhiteRoleInfo;
@class NIMQChatUpdateChannelCategoryBlackWhiteMemberInfo;
@class NIMQChatUpdateQuickCommentInfo;
@class NIMQChatChannelCategory;
@class NIMQChatServerRole;
@class NIMQChatPermissionStatusInfo;
NS_ASSUME_NONNULL_BEGIN

// 参考：http://doc.hz.netease.com/display/MMC/QChatSystemMsgType
@protocol NIMQChatSystemNotificationAttachment <NSObject, NSCopying>
@property (nullable, nonatomic, copy, readonly) NSDictionary *attachDict;
@property(nonatomic, assign, readonly) NIMQChatSystemNotificationType type;
+ (id<NIMQChatSystemNotificationAttachment>)initWithDict:(NSDictionary *)attachDict
                                                    type:(NIMQChatSystemNotificationType)type;
@end

@protocol NIMQChatApplyJoinServerMemberAcceptAttachment <NIMQChatSystemNotificationAttachment>
@property(nullable, nonatomic, copy, readonly) NIMQChatServer *server;
@property(nullable, nonatomic, copy, readonly) NSString *applyAccid;
@end

@protocol NIMQChatApplyJoinServerMemberDoneAttachment <NIMQChatSystemNotificationAttachment>
@property(nullable, nonatomic, copy, readonly) NIMQChatServer *server;
@end

@protocol NIMQChatCreateChannelNotificationAttachment <NIMQChatSystemNotificationAttachment>
@property(nullable, nonatomic, copy, readonly) NIMQChatChannel *channel;
@end

@protocol NIMQChatCreateServerAttachment <NIMQChatSystemNotificationAttachment>
@property(nullable, nonatomic, copy, readonly) NIMQChatServer *server;
@end

@protocol NIMQChatDeleteChannelNotificationAttachment <NIMQChatSystemNotificationAttachment>
@end

@protocol NIMQChatInviteServerMemberAcceptAttachment <NIMQChatSystemNotificationAttachment>
@property(nullable, nonatomic, copy, readonly) NIMQChatServer *server;
@property(nullable, nonatomic, copy, readonly) NSString *inviteAccid;
@end

@protocol NIMQChatInviteServerMemberAttachment <NIMQChatSystemNotificationAttachment>
@end

@protocol NIMQChatInviteServerMembersDoneAttachment <NIMQChatSystemNotificationAttachment>
@property(nullable, nonatomic, copy, readonly) NIMQChatServer *server;
@property(nullable, nonatomic, copy, readonly) NSArray<NSString *> *invitedAccids;
@end

@protocol NIMQChatKickServerMembersDoneAttachment <NIMQChatSystemNotificationAttachment>
@property(nullable, nonatomic, copy, readonly) NIMQChatServer *server;
@property(nullable, nonatomic, copy, readonly) NSArray<NSString *> *kickedAccids;
@end

@protocol NIMQChatLeaveServerAttachment <NIMQChatSystemNotificationAttachment>
@property(nullable, nonatomic, copy, readonly) NIMQChatServer *server;
@end

@protocol NIMQChatRejectApplyServerMemberAttachment <NIMQChatSystemNotificationAttachment>
@end

@protocol NIMQChatRejectInviteServerMemberAttachment <NIMQChatSystemNotificationAttachment>
@end

@protocol NIMQChatRemoveServerAttachment <NIMQChatSystemNotificationAttachment>
@end

@protocol NIMQChatUpdateChannelNotificationAttachment <NIMQChatSystemNotificationAttachment>
@property(nullable, nonatomic, copy, readonly) NIMQChatChannel *channel;
@end

@protocol NIMQChatUpdateServerAttachment <NIMQChatSystemNotificationAttachment>
@property(nullable, nonatomic, copy, readonly) NIMQChatServer *server;
@end

@protocol NIMQChatUpdateServerMemberAttachment <NIMQChatSystemNotificationAttachment>
@property(nullable, nonatomic, copy, readonly) NIMQChatServer *server;
@property(nullable, nonatomic, copy, readonly) NIMQChatServerMember *serverMember;
@end

@protocol NIMQChatUpdateChannelBlackWhiteRoleAttachment <NIMQChatSystemNotificationAttachment>
@property(nullable, nonatomic, copy, readonly) NIMQChatUpdateChannelBlackWhiteRoleInfo *updateBlackWhiteRoleInfo;
@end

@protocol NIMQChatUpdateChannelBlackWhiteMemberAttachment <NIMQChatSystemNotificationAttachment>
@property(nullable, nonatomic, copy, readonly) NIMQChatUpdateChannelBlackWhiteMembersInfo *updateBlackWhiteMembersInfo;
@end

@protocol NIMQChatUpdateQuickCommentAttachment <NIMQChatSystemNotificationAttachment>
@property(nullable, nonatomic, copy, readonly) NIMQChatUpdateQuickCommentInfo *updateQuickCommentInfo;
@end

@protocol NIMQChatCreateChannelCategoryNotificationAttachment <NIMQChatSystemNotificationAttachment>
@property(nullable, nonatomic, copy, readonly) NIMQChatChannelCategory *channelCategory;
@end

@protocol NIMQChatUpdateChannelCategoryNotificationAttachment <NIMQChatSystemNotificationAttachment>
@property(nullable, nonatomic, copy, readonly) NIMQChatChannelCategory *channelCategory;
@end


@protocol NIMQChatDeleteChannelCategoryNotificationAttachment <NIMQChatSystemNotificationAttachment>
@property(nonatomic, assign, readonly) unsigned long long categoryId;
@end

@protocol NIMQChatUpdateChannelCategoryBlackWhiteRoleAttachment <NIMQChatSystemNotificationAttachment>
@property(nullable, nonatomic, copy, readonly) NIMQChatUpdateChannelCategoryBlackWhiteRoleInfo *updateChannelCategoryBlackWhiteRoleInfo;
@end

@protocol NIMQChatUpdateChannelCategoryBlackWhiteMemberAttachment <NIMQChatSystemNotificationAttachment>
@property(nullable, nonatomic, copy, readonly) NIMQChatUpdateChannelCategoryBlackWhiteMemberInfo *updateChannelCategoryBlackWhiteMemberInfo;
@end

/**
 * 服务器身份组加入成员通知的附件
 */
@protocol NIMQChatAddServerRoleMembersNotificationAttachment <NIMQChatSystemNotificationAttachment>
/**
 * 添加的成员
 */
@property(nullable, nonatomic, copy, readonly) NSArray <NSString *> *addServerRoleAccIds;

/**
 * 服务器id
 */
@property(nonatomic, assign, readonly) unsigned long long serverId;
/**
 * 身份组id
 */
@property(nonatomic, assign, readonly) unsigned long long roleId;

@end

/**
 * 移除服务器身份组成员通知的附件
 */
@protocol NIMQChatRemoveServerRoleMembersNotificationAttachment <NIMQChatSystemNotificationAttachment>
/**
 * 添加的成员
 */
@property(nullable, nonatomic, copy, readonly) NSArray <NSString *> *removeServerRoleAccIds;

/**
 * 服务器id
 */
@property(nonatomic, assign, readonly) unsigned long long serverId;
/**
 * 身份组id
 */
@property(nonatomic, assign, readonly) unsigned long long roleId;

@end

/**
 * 更新服务器身份组权限的通知的附件
 */
@protocol NIMQChatUpdateServerRoleAuthNotificationAttachment <NIMQChatSystemNotificationAttachment>

/**
 * 服务器id
 */
@property(nonatomic, assign, readonly) unsigned long long serverId;
/**
 * 身份组id
 */
@property(nonatomic, assign, readonly) unsigned long long roleId;

/**
 * 操作的权限状态列表
 */
@property (nonatomic, copy) NSArray <NIMQChatPermissionStatusInfo *> *updateAuths;

@end

/**
 * 更新频道身份组权限的通知的附件
 */
@protocol NIMQChatUpdateChannelRoleAuthNotificationAttachment <NIMQChatSystemNotificationAttachment>
/**
 * 服务器id
 */
@property(nonatomic, assign, readonly) unsigned long long serverId;
/**
 * 频道身份组id
 */
@property(nonatomic, assign, readonly) unsigned long long roleId;
/**
 * 频道id
 */
@property(nonatomic, assign, readonly) unsigned long long channelId;
/**
 * 服务器身份组id
 */
@property(nonatomic, assign, readonly) unsigned long long parentRoleId;

/**
 * 操作的权限状态列表
 */
@property (nonatomic, copy) NSArray <NIMQChatPermissionStatusInfo *> *updateAuths;

@end

/**
 * 更新个人定制权限的通知的附件
 */
@protocol NIMQChatUpdateMemberRoleAuthNotificationAttachment <NIMQChatSystemNotificationAttachment>
/**
 * 服务器id
 */
@property(nonatomic, assign, readonly) unsigned long long serverId;
/**
 * 频道id
 */
@property(nonatomic, assign, readonly) unsigned long long channelId;
/**
 * 个人id
 */
@property(nullable, nonatomic, copy, readonly) NSString *accId;

/**
 * 操作的权限状态列表
 */
@property (nonatomic, copy) NSArray <NIMQChatPermissionStatusInfo *> *updateAuths;


@end


NS_ASSUME_NONNULL_END
