// KeyChainPlugin.h
#import <Foundation/Foundation.h>

@interface KeyChainPlugin : NSObject

@property (copy) NSString *_keyForID;
@property (copy) NSString *_keyForUUID;

@end