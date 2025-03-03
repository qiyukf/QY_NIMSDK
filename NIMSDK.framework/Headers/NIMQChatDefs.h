//
//  NIMQChatDefs.h
//  NIMSDK
//
//  Created by Netease.
//  Copyright © 2022 Netease. All rights reserved.
//

#ifndef NIMQChatDefs_h
#define NIMQChatDefs_h

#import <Foundation/Foundation.h>

/**
 *  登录步骤枚举
 */
typedef NS_ENUM(NSInteger, NIMQChatLoginStep)
{
    /**
     *  连接服务器
     */
    NIMQChatLoginStepLinking = 1,
    /**
     *  连接服务器成功
     */
    NIMQChatLoginStepLinkOK,
    /**
     *  连接服务器失败
     */
    NIMQChatLoginStepLinkFailed,
    /**
     *  登录
     */
    NIMQChatLoginStepLogining,
    /**
     *  登录成功
     */
    NIMQChatLoginStepLoginOK,
    /**
     *  登录失败
     */
    NIMQChatLoginStepLoginFailed,
    /**
     *  开始同步
     */
    NIMQChatLoginStepSyncing,
    /**
     *  同步完成
     */
    NIMQChatLoginStepSyncOK,
    /**
     *  连接断开
     */
    NIMQChatLoginStepLoseConnection,
    /**
     *  网络切换
     *  @discussion 这个并不是登录步骤的一种,但是UI有可能需要通过这个状态进行UI展现
     */
    NIMQChatLoginStepNetChanged,
};
/**
 * 系统通知类型
 */
typedef NS_ENUM(NSInteger, NIMQChatSystemNotificationType) {
    /**
    * 邀请服务器成员
    */
    NIMQChatSystemNotificationTypeServerMemberInvite = 1,

    /**
     * 拒绝邀请
     */
    NIMQChatSystemNotificationTypeServerMemberInviteReject = 2,

    /**
     * 申请加入服务器
     */
    NIMQChatSystemNotificationTypeServerMemberApply = 3,

    /**
     * 拒绝申请
     */
    NIMQChatSystemNotificationTypeServerMemberApplyReject = 4,

    /**
     * 创建服务器
     */
    NIMQChatSystemNotificationTypeServerCreate = 5,

    /**
     * 删除服务器
     */
    NIMQChatSystemNotificationTypeServerRemove = 6,

    /**
     * 修改服务器信息
     */
    NIMQChatSystemNotificationTypeServerUpdate = 7,

    /**
     * 已邀请服务器成员
     */
    NIMQChatSystemNotificationTypeServerMemberInviteDone = 8,

    /**
     * 接受邀请
     */
    NIMQChatSystemNotificationTypeServerMemberInviteAccept = 9,

    /**
     * 已申请加入服务器
     */
    NIMQChatSystemNotificationTypeServerMemberApplyDone = 10,

    /**
     * 接受申请
     */
    NIMQChatSystemNotificationTypeServerMemberApplyAccept = 11,

    /**
     * 踢除服务器成员
     */
    NIMQChatSystemNotificationTypeServerMemberKick = 12,

    /**
     * 主动离开服务器
     */
    NIMQChatSystemNotificationTypeServerMemberLeave = 13,

    /**
     * 修改服务器成员信息
     */
    NIMQChatSystemNotificationTypeServerMemberUpdate = 14,

    /**
     * 创建频道
     */
    NIMQChatSystemNotificationTypeChannelCreate = 15,

    /**
     * 删除频道
     */
    NIMQChatSystemNotificationTypeChannelRemove = 16,

    /**
     * 修改频道信息
     */
    NIMQChatSystemNotificationTypeChannelUpdate = 17,

    /**
     * 频道修改黑白名单身份组
     */
    NIMQChatSystemNotificationTypeChannelUpdateWhiteBlackRole = 18,

    /**
     * 频道修改黑白名单成员
     */
    NIMQChatSystemNotificationTypeChannelUpdateWhiteBlackMember = 19,
    
    /**
     * 更新了消息的快捷评论
     */
    NIMQChatSystemNotificationTypeUpdateQuickComment = 20,
    /**
     * 新增频道分组
     */
    NIMQChatSystemNotificationTypeCreateChannelCategory = 21,
    /**
     * 删除频道分组
     */
    NIMQChatSystemNotificationTypeDeleteChannelCategory = 22,
    /**
     * 修改频道分组
     */
    NIMQChatSystemNotificationTypeUpdateChannelCategory = 23,
    /**
     * 更新频道分组黑白名单身份组
     */
    NIMQChatSystemNotificationTypeUpdateChannelCategoryBlackWhiteRole = 24,
    /**
     * 更新频道分组黑白名单成员
     */
    NIMQChatSystemNotificationTypeUpdateChannelCategoryBlackWhiteMember = 25,
    /**
     * 加入服务器身份组成员
     */
    NIMQChatSystemNotificationTypeAddServerRoleMembers = 26,
    /**
     * 移除服务器身份组成员
     */
    NIMQChatSystemNotificationTypeRemoveServerRoleMembers = 27,
    /**
     * 更新服务器身份组权限
     */
    NIMQChatSystemNotificationTypeServerRoleAuthUpdate = 28,
    /**
     * 更新频道身份组权限
     */
    NIMQChatSystemNotificationTypeChannelRoleAuthUpdate = 29,
    /**
     * 更新频道中个人定制权限
     */
    NIMQChatSystemNotificationTypeMemberRoleAuthUpdate = 30,
    /**
     * 自定义信息
     */
    NIMQChatSystemNotificationTypeCustom = 100,

};

typedef NS_ENUM(NSInteger, NIMQChatSystemNotificationToType) {
    /**
     * 服务器ID
     */
    NIMQChatSystemNotificationToTypeServer = 1,
    /**
     * 服务器ID/频道ID
     */
    NIMQChatSystemNotificationToTypeChannel = 2,
    /**
     * 服务器ID/账号
     */
    NIMQChatSystemNotificationToTypeServerAccids = 3,
    /**
     * 服务器ID/频道ID/账号
     */
    NIMQChatSystemNotificationToTypeChannelAccids = 4,
};

//身份组类型 1表示everyone,2表示定制身份组
typedef NS_ENUM(NSInteger, NIMQChatRoleType) {
    /**
     * everyone
     */
    NIMQChatRoleTypeEveryOne = 1,
    /**
     * 定制
     */
    NIMQChatRoleTypeCustom = 2,
};

/**
 *  圈组网络请求回调
 *
 *  @param error 错误信息
 */
typedef void(^NIMQChatHandler)(NSError *__nullable error);

// 权限
typedef NS_ENUM(NSInteger, NIMQChatPermissionType) {
    // 管理服务器。修改服务器
    NIMQChatPermissionTypeManageServer             =       1,
   // 管理频道，server和channel都有
    NIMQChatPermissionTypeManageChannel            =       2,
   // 管理角色的权限，server和channel都有
    NIMQChatPermissionTypeManageRole               =       3,
   // 发送消息，server和channel都有
    NIMQChatPermissionTypeSendMsg                  =       4,
    // 修改自己在该server的成员信息，仅server有
    NIMQChatPermissionTypeModifySelfInfo           =       5,
   // 邀请他人进入server的，仅server有
    NIMQChatPermissionTypeInviteToServer           =       6,
   // 踢除他人的权限，仅server有
    NIMQChatPermissionTypeKickOthersInServer       =       7,
   // 修改他人在该server的服务器成员信息，仅server有
    NIMQChatPermissionTypeModifyOthersInfoInServer =       8,
   // 撤回他人消息的权限，server和channel都有
    NIMQChatPermissionTypeRevokeMsg                =       9,
   // 删除他人消息的权限，server和channel都有
    NIMQChatPermissionTypeDeleteOtherMsg           =       10,
   //  @ 他人的权限，server和channel都有
    NIMQChatPermissionTypeRemindOther              =       11,
   // @ everyone的权限，server和channel都有
    NIMQChatPermissionTypeRemindAll                =       12,
   // 管理黑白名单的权限，server和channel都有
    NIMQChatPermissionTypeManageBlackWhiteList     =       13,
   // 封禁他人的权限，仅server有，允许成员永久封禁其他成员访问此服务器
    NIMQChatPermissionTypeManageBanServerMember     =       14,
};

// 权限操作
typedef NS_ENUM(NSInteger, NIMQChatPermissionStatus) {
    NIMQChatPermissionStatusDeny   = -1,
    NIMQChatPermissionStatusExtend = 0,
    NIMQChatPermissionStatusAllow  = 1,
};
// 成员
typedef NS_ENUM(NSInteger, NIMQChatServerMemberType) {
    NIMQChatServerMemberTypeCommon   =  0,
    NIMQChatServerMemberTypeOwner    =  1,
};
// 频道类型
typedef NS_ENUM(NSInteger, NIMQChatChannelType) {
    NIMQChatChannelTypeMsg   =  0,
    NIMQChatChannelTypeCustom    =  100,
};

// 频道配置与频道分组同步模式
typedef NS_ENUM(NSInteger, NIMQChatChannelSyncMode) {
    NIMQChatChannelSyncModeNone   =  -1,
    NIMQChatChannelSyncModeNotSync    =  0,
    NIMQChatChannelSyncModeSync   =  1,
};
// 频道查看模式
typedef NS_ENUM(NSInteger, NIMQChatChannelViewMode) {
    NIMQChatChannelViewModeNone       = -1,
    NIMQChatChannelViewModePublic     =  0,
    NIMQChatChannelViewModePrivate    =  1,
};


// 服务器邀请模式
typedef NS_ENUM(NSInteger, NIMQChatServerInviteMode) {
    NIMQChatServerInviteModeNeedApprove   =  0, // 需要同意
    NIMQChatServerInviteModeAutoEnter     =  1,  // 不需要同意
};

// 服务器申请模式
typedef NS_ENUM(NSInteger, NIMQChatServerApplyMode) {
    NIMQChatServerApplyModeAutoEnter      =  0, // 不需要同意
    NIMQChatServerApplyModeNeedApprove    =  1,  // 需要同意
};
//频道成员身份组的操作类型
typedef NS_ENUM(NSInteger, NIMQChatChannelMemberRoleOpeType) {
    NIMQChatChannelMemberRoleOpeTypeAdd       =  1, //添加
    NIMQChatChannelMemberRoleOpeTypeRemove    =  2,  //移除
};
//频道成员身份组类型
typedef NS_ENUM(NSInteger, NIMQChatChannelMemberRoleType) {
    NIMQChatChannelMemberRoleTypeWhite       =  1, // 白名单
    NIMQChatChannelMemberRoleTypeBlack    =  2,  // 黑名单
};

//成员封禁类型
typedef NS_ENUM(NSInteger, NIMQChatServerMemberBanType) {
    NIMQChatServerMemberBanTypeBan       =  1, // 封禁
    NIMQChatServerMemberBanTypeUnBan    =  2, // 解封
};

//快捷评论操作类型
typedef NS_ENUM(NSInteger, NIMQChatUpdateQuickCommentType) {
    NIMQChatUpdateQuickCommentTypeAdd       =  1, // 添加
    NIMQChatUpdateQuickCommentTypeDelete    =  2, // 删除
};

typedef NS_ENUM(NSInteger, NIMQChatSearchServerType) {
    NIMQChatSearchServerTypeSquare      = 1, // 广场搜索
    NIMQChatSearchServerTypePersonal    = 2, // 个人服务器搜索
};

#endif /* NIMQChatDefs_h */
