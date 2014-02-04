#ifdef __OBJC__
#import <UIKit/UIKit.h>
#endif

#import "Pods-environment.h"
//
// Prefix header for all source files of the 'MapView' target in the 'MapView' project
//

#if __OBJC__
    #import <Foundation/Foundation.h>
    #import <UIKit/UIKit.h>
    #import <CoreLocation/CoreLocation.h>
    #import <QuartzCore/QuartzCore.h>

    #import "RMGlobalConstants.h"
#endif

#if DEBUG
#define RMLog(args...) NSLog(@"%@", [NSString stringWithFormat: args])
#define LogMethod() NSLog(@"logged method call: -[%@ %@] (line %d)", self, NSStringFromSelector(_cmd), __LINE__)
#define WarnDeprecated() NSLog(@"***** WARNING: deprecated method call: -[%@ %@] (line %d)", self, NSStringFromSelector(_cmd), __LINE__)
#else  
// DEBUG not defined:

#define RMLog(args...)    // do nothing.
#define LogMethod() 
#define WarnDeprecated() 
#define NS_BLOCK_ASSERTIONS 1
#endif

#define RMPostVersion6 (floor(NSFoundationVersionNumber) >  NSFoundationVersionNumber_iOS_5_1)
#define RMPreVersion6  (floor(NSFoundationVersionNumber) <= NSFoundationVersionNumber_iOS_5_1)

#define RMPostVersion7 (floor(NSFoundationVersionNumber) >  NSFoundationVersionNumber_iOS_6_1)
#define RMPreVersion7  (floor(NSFoundationVersionNumber) <= NSFoundationVersionNumber_iOS_6_1)
