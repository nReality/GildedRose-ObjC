#import <Foundation/Foundation.h>

@interface Item : NSObject {
    
    NSString *name;
    int sellIn;
    int quality;
    
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic) int sellIn;
@property (nonatomic) int quality;

+(Item *) itemWithName:(NSString *)name sellIn:(int)sellIn andQuality:(int)quality;


@end
