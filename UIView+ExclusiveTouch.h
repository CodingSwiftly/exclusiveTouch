//
//  UIView+ExclusiveTouch.h
//  Created by Kaushik Medcharla on 2/3/16.
//  
//

#import <UIKit/UIKit.h>

/* Explanation
 
 If a user taps/touches more than one button/widget at the same time then more
 than one actions are triggered. This is happening because every view has a property called exclusiveTouch and by default its value is NO.
 
 
 We can solve this issue by overwriting the getter method of exclusiveTouch property in a category but Apple discourages naming a method in category same as the
 default ones.
 
 As per Apple documentation
 
    If the name of a method declared in a category is the same as a method in the original class, or a method in another category on the same class (or even a 
    superclass), the behavior is undefined as to which method implementation is used at runtime
 
 
 So we opted to use runtime library provided by Apple and swap the original getter method, -(BOOL)isExclusiveTouch with our version 
 _desired_isExclusiveTouch. So at run time, For every view, _desired_isExclusiveTouch method is called instead of isExclusiveTouch. In the method
 _desired_isExclusiveTouch we always return YES which ensures at a time only one button/widget responds to more than one touch i.e. even if a user touches more
 than one button simultaneously only one of the buttons' action is triggered.
 
 We are swapping methods (called method swizzling) in load method of UIView because load method does all the initialization wherever it is defined , either 
 in a class or category. And this method is called prior to main() function.
 
*/

@interface UIView (ExclusiveTouch)

@end
