#import <InterfaceBuilderKit/InterfaceBuilderKit.h>
#import "ClockControl.h"

@interface ClockControlPaletteInspector : IBInspector {

}

- (IBAction)setCurrentTime:(id)sender;

@end

@interface ClockControl (ClockControlIntegration)

- (NSInteger)minuteValue;
- (NSInteger)hourValue;

- (void)setMinuteValue:(NSInteger)minuteValue;
- (void)setHourValue:(NSInteger)hourValue;

@end
