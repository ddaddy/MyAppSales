//
//  Account+MyAppSales.h
//  ASiST
//
//  Created by Oliver on 24.10.09.
//  Copyright 2009 Drobnik.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Account.h"

typedef enum { AccountTypeUnknown = 0, AccountTypeITC = 1, AccountTypeNotifications = 2, AccountTypeApplyzer = 3} AccountType;


@class AppGrouping;

@interface Account (MyAppSales)

@property (nonatomic, assign) AppGrouping *appGrouping;
@property (nonatomic, assign) AccountType accountType;

+ (NSString *)stringForAccountType:(AccountType)anAccountType;

@end
