//
//  ToDoItem.h
//  ToDoList
//
//  Created by Tom Cheng on 12/22/14.
//  Copyright (c) 2014 Tom Cheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
