# UIView + ExclusiveTouch

Adding this category (on UIView) to your project would make sure only one view would respond even when user touches 
more than one view simultaneously. 

Lets say your screen has two buttons and each triggers a different action upon pressing. If a user presses both the buttons
simultaneously, then both the actions would be called by default because exclusiveTouch property is NO. If you add this category to 
your project then it would make sure either of the actions is called instead of both.

Adding this category on UIView is equivalent to setting the exclusiveTouch property to YES for each and every view ( button, UISwitch, barbutton etc) present in the project.
