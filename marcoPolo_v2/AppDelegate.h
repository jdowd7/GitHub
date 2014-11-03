//
//  AppDelegate.h
//  marcoPolo_v2
//
//  Created by red5 on 7/5/14.
//  Copyright (c) 2014 red5. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KeyPair.h"
#import "ContactsData.h"
#import "MessagesData.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (nonatomic, retain, readonly) NSMutableArray *contacts;

-(NSArray*)getAllContacts;
-(NSArray*)getPersonalKeys;
-(NSArray*)getAllMessages;
-(NSArray*)getContactsMarco;

//for handling URL query
@property (nonatomic, retain) NSString *importKey;
@property (nonatomic, retain) NSString *importNumber;
@property (nonatomic, retain) NSString *importName;
@property (nonatomic, retain) NSString *importID;
//@property (nonatomic, retain) KeyPair *Contact2Add;
@property (nonatomic, retain) ContactsData *Contact2Add;

//handling msg
@property (nonatomic, retain) MessagesData *Message2Add;
@property (nonatomic, retain) NSString *msgEncrypt;
@property (nonatomic, retain) NSString *msgID;
@property (nonatomic, retain) NSString *msgTitle;
@property (nonatomic, retain) NSString *msgText;
@property (nonatomic, retain) NSString *msgRead;
@property (nonatomic, retain) NSString *msgContact;

//@property (retain, nonatomic) UNNetPGP *pgpBlob;
@property (nonatomic, retain) ContactsData *contact2Search;


//props for importing demo key
@property (nonatomic, retain) NSString *demoPublicKey;
@property (nonatomic, retain) NSString *demoPrivateKey;
@property (nonatomic, retain) NSString *demoEncryptedMessage;

@end


