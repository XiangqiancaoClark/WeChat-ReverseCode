//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface NewContactDB : NSObject
{
    WCTDatabase *m_contactDB;
    WCTTable *_m_tableContact;
    WCTTable *_m_tableOpenIMContact;
    WCTTable *_m_tableMassSendContact;
    WCTTable *_m_tableContactSendMsgTicket;
    WCTTable *_m_tableChatRoomToolWeApp;
}

+ (id)contactDBPathWithDocDir:(id)arg1 userName:(id)arg2;
+ (unsigned int)imgStatusToEnum:(id)arg1;
+ (id)imgStatusToString:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain) WCTTable *m_tableChatRoomToolWeApp; // @synthesize m_tableChatRoomToolWeApp=_m_tableChatRoomToolWeApp;
@property(retain) WCTTable *m_tableContactSendMsgTicket; // @synthesize m_tableContactSendMsgTicket=_m_tableContactSendMsgTicket;
@property(retain) WCTTable *m_tableMassSendContact; // @synthesize m_tableMassSendContact=_m_tableMassSendContact;
@property(retain) WCTTable *m_tableOpenIMContact; // @synthesize m_tableOpenIMContact=_m_tableOpenIMContact;
@property(retain) WCTTable *m_tableContact; // @synthesize m_tableContact=_m_tableContact;
- (id)getContactSendMsgTicket:(id)arg1;
- (_Bool)insertOrReplaceContactSendMsgTicket:(id)arg1;
- (id)getAllMessagesContactNames;
- (id)getAllBrandContactNames;
- (id)m_database;
- (_Bool)ModifyContactEncryptSecret:(id)arg1 withEncryptSecretInfo:(id)arg2;
- (_Bool)ModifyNotifyStatus:(id)arg1 withStatus:(unsigned int)arg2;
- (_Bool)IsContactExist:(id)arg1;
- (unsigned int)getContactCount;
- (_Bool)updateContact:(id)arg1;
- (_Bool)deleteContact:(id)arg1;
- (_Bool)addContact:(id)arg1;
- (_Bool)addContact:(id)arg1 log:(_Bool)arg2;
- (id)genDBContactFrom:(id)arg1;
- (_Bool)getAllContactNoExtInfoList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)getAllContactList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)getAllRemarkList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)getAllUserName:(id)arg1;
- (_Bool)loadContactExtInfo:(id)arg1;
- (id)getContact:(id)arg1;
- (void)getFriendExtTableValue:(id)arg1 fromDBObject:(id)arg2;
- (void)getFriendTableValue:(id)arg1 fromDBObject:(id)arg2;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (void)initDBWithDocDir:(id)arg1 userName:(id)arg2;
- (void)createContactTable;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (id)getChatRoomToolWeAppListWithUserName:(id)arg1;
- (_Bool)deleteChatRoomToolWeAppWithUserName:(id)arg1 insertNewWeAppItemList:(id)arg2;

@end

