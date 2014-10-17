//
//  SvUDIDTools.h
//  SvUDID
//
//  Created by  maple on 8/18/13.
//  Copyright (c) 2013 maple. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_feature(objc_arc)
#define arc_mrc_release(OBJECT) [OBJECT self]
#define __arc_mrc_bridge        __bridge
#define __arc_mrc_CFTypeRef     void
#else
#define arc_mrc_release(OBJECT) [OBJECT release]
#define __arc_mrc_bridge
#define __arc_mrc_CFTypeRef     CFTypeRef
#endif

@interface SvUDIDTools : NSObject


/*
 * @brief obtain Unique Device Identity
 */
+ (NSString*)UDID;

@end
