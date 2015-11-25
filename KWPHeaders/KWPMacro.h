//
//  KWPMacro.h
//  KWPAnimations
//
//  Created by 朴 根佑 on 2015/11/25.
//  Copyright © 2015年 KWP. All rights reserved.
//

#ifndef KWPMacro_h
#define KWPMacro_h

//color
#define KWP_COLOR(c)  ((c)/255.0)
#define KWP_COLOR_RGB(r,g,b,a)  [UIColor colorWithRed:KW_COLOR(r) green:KW_COLOR(g) blue:KW_COLOR(b) alpha:a]

//math
#define KWP_ROUNDF(f) roundf( f * 100)/100

//userdefaults
#define KWP_GetUserDefault(key)   [NSKeyedUnarchiver unarchiveObjectWithData:[[NSUserDefaults standardUserDefaults] objectForKey:key]]
#define KWP_SetUserDefault(id,key) [[NSUserDefaults standardUserDefaults] setObject: [NSKeyedArchiver archivedDataWithRootObject:id] forKey:key]


//debug
#ifdef  DEBUG

#define DFT_TRACE   NSLog(@"%s[Line %d]", PRETTY_FUNCTION, LINE);
#define NSLog(fmt, ...) NSLog((@"%s[Line %d] " fmt), PRETTY_FUNCTION, LINE, ##VA_ARGS);

#elif ADHOC

#define DFT_TRACE
#define NSLog(...)         // NSLog(VA_ARGS)

#else

#define DFT_TRACE
#define NSLog(...)         // NSLog(VA_ARGS)

#endif


#endif /* KWPMacro_h */
