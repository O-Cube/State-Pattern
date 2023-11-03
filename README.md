# State-Pattern
sample solution using state pattern
From the image below, at any position A, B, C, D, E moving up, down, left and right is going to cause the current position to change accordingly.
This means, if the current context is at B, then left takes it to A, right to C, up to E and down to D. If the current context is position A, then up->position C, down->D, left->A, right->B.
Also if the current context is E, up->E, down->B, left->A and right->C. For currrent context being C then, up->E, down->D, left->B and right->C.
And finally, for D up->B, down->D, left->A and right->C. 

This explains a finite state design pattern where the direction of movement depends on the current context.
![image](https://github.com/O-Cube/State-Pattern/assets/65163799/521497d6-1c3a-404a-a4c6-a89940d760dd)

# Requirements(linux Ubuntu):
- g++ compiler
# Procedure:
- clone repository
- make -f Makefile to build the application
- make -f Makefile Run to execute the application
- make -f Makefile clean to delete object files and executable
output:
![image](https://github.com/O-Cube/State-Pattern/assets/65163799/0cfecab7-bcd2-49b8-86d4-9889f300d3ab)

# Additional Requiremnts for Test(linux Ubuntu):
- Install google test and mock framework package
- navigate to test folder; run make -f Makefile to build the application
- make -f Makefile Run to execute test cases
- make -f Makefike clean to delete object files, executable, .gcno and .gcda files
output:
![fsm test](https://github.com/O-Cube/State-Pattern/assets/65163799/3b87b4da-8b14-483d-ad96-9fae568a6d1e)
