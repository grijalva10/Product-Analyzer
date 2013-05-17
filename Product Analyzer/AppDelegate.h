//
//  AppDelegate.h
//  Product Analyzer
//
//  Created by Jeff Grijalva on 5/15/13.
//  Copyright (c) 2013 Jeff Grijalva. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class ImportController;

@interface AppDelegate : NSObject <NSApplicationDelegate> {
@private ImportController *importController;
}

@property (assign) IBOutlet NSWindow *window;
@property (strong, nonatomic) ImportController * importWindowController;
@property (assign) IBOutlet NSWindow *rulesSheet;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;


- (IBAction)showImport:(id)sender;


- (IBAction)importButton:(NSToolbarItem *)sender;
- (IBAction)exportButton:(NSToolbarItem *)sender;
- (IBAction)rulesButton:(NSToolbarItem *)sender;

- (IBAction)openRules:(id)sender;
- (IBAction)closeRules:(id)sender;

@end
