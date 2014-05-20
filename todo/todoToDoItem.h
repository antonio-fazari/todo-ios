//
//  todoToDoItem.h
//  todo
//
//  Created by Antonio Fazari on 20/05/2014.
//  Copyright (c) 2014 Antonio Fazari. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface todoToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
