## Mergesort
- `sort.h`: contains prototypes of all the functions. included in all the .c files
- `sortmain.c`: Main program, creates array of random numbers, prints it, calls sort and prints again.
- `sort.c`: function that sorts, a skeleton, you fill in the method.
- `arrayutils.c`: utility functions, fillarray, which probably works, and printarray
- `swap.s`: The familiar swap function.
- `Makefile`: for each file that needs to be compiled.

**Notes**: A random number generator is used to create test data. You can choose the size of your array in sortmain.c. Each run will get different numbers, but if you comment out the line indicated, you will always get the same numbers, this is uesful while debugging. In arrayutils.c you can change the range of numbers that are generated. Choose a pleasing way to display your array.
