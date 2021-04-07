## Quicksort
Quicksort is an efficient (*O(n lg n)*), recursive algorithm published by C. A. R. Hoare in 1961. The basic idea is to 'divide and conquer' by partitioning an array into smaller and larger values, and then repeating the process on shorter arrays.

The files are:
- `quicksort.h`: contains prototypes of all the functions. included in all the .c files
- `qsmain.c`: Main program, creates array of random numbers, prints it, calls quicksort and prints again.
- `quicksort.c`: the quicksort function, a skeleton, you fill in the recursion.
- `partition.c`: the tricky one. returns two pointers by storing them in addresses passed as arguments.
-`qsutils.c`: utility functions: fillarray, which probably works, and printarray.
- `swap.s`: The familiar swap function.
- `Makefile`: for each file that needs to be compiled.
