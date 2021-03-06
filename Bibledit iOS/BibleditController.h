/*
 Copyright (©) 2003-2017 Teus Benschop.
 
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */


#import <Foundation/Foundation.h>

@interface BibleditController : NSObject

+ (void) appDelegateDidFinishLaunchingWithOptions;
+ (void) viewControllerViewDidLoad:(UIView *)uiview;
+ (void) tabBarControllerViewDidLoad:(UITabBarController *)tabbarcontroller;
+ (void) bibleditInstallResources;
+ (void) bibleditEnteredForeground;
+ (void) bibleditBrowseTo:(NSString*)urlString;
+ (void) receivedMemoryWarning;
+ (void) bibleditWillEnterBackground;
+ (void) bibleditWillTerminate;
+ (void) runRepetitiveTimer:(NSTimer *)timer;
+ (void) loadStoryBoard:(NSString *)name;
+ (void) startPlainView:(NSString *)url;
+ (void) startTabbedView:(NSArray *)urls labels:(NSArray *)labels;


@end
