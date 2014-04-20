//
//  MemberListController.h
//  IPMessenger
//
//  Created by Xinqi Chan on 14-4-18.
//
//
#import <Cocoa/Cocoa.h>
#import <Foundation/Foundation.h>

@interface MemberListController : NSObject<NSTableViewDataSource, NSTableViewDelegate> {
    NSWindow*               window;
    NSTableView*            tableView;
    NSMutableArray*         users;
    NSPanel *chatPanel;
    NSPredicate*			userPredicate;
}
@property (assign) IBOutlet NSTableView *tableView;
@property (assign) IBOutlet NSWindow *window;
@property (assign) NSMutableArray *users;
@property (assign) IBOutlet NSPanel *chatPanel;

-(void)initWindow;
@end
