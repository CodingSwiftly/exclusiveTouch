#UIView + ExclusiveTouch

Adding this category (on UIView) to your project would make sure only one view would respond even when user touches 
more than one view simultaneously. 

Lets say your screen has two buttons and each triggers a different action upon pressing. If a user presses both the buttons
simultaneously, then both the actions would be called as exclusiveTouch property for a view is NO by default.

This category on UIView is equivalent to setting the exclusiveTouch property to YES of every view ( button, UISwitch, barbutton etc) 
present in your project.
