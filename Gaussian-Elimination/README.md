Solving given system linear of equations via Gaussian elimination.
The file solve.c contains a function that takes in 2D array as input, row reduces it and returns solution vector.


Changelog:

Started on 27Jan2024:

Basic implementation done in 28Jan2024
    A method takes in a 2 dimensional array as input, row reduces it and then return solution vector.
    The method has a side effect in that the input matrix is reduced.

29Jan2024:
    The logic is moved into seperate file solve.c along with heaader file solve.h .
    The main function is it's own file.


Notes:

Creating good I/O in C is extremely difficult for me. Variable lenght string parsing is beyond my comprehension.
I instead decided to make this into a python module. I tried learning how to do it by implementing an simple C function into Python but I failed miserably. 
Creating python modules seems to be way out of my league ,atleast right now.

Maybe I should try with lua or something idk.

Also I think it would be helpful if my program could distinguish whether given system of linear equations is dependent or inconsistent. Right now it cannot do that.

