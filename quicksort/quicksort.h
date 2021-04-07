//	Header file for cs 216 quicksort project 
#include <stdio.h>		// everyone might want to print...
#include <stdlib.h>		//

/* prototypes for the functions in various files
    prototypes don't need to name the arguments, 
    I have included some to suggest usage, but you can use whatever you want.
*/
//	In qsutils.c
void fillarray (int * , int);	// name of an array, length -- fill with random numbers
void printarray(int * , int);	// name of an array, length -- print an array

//	In quicksort.c
void quicksort ( int * first, int * last);	// 2 pointers, to bounds of array to sort
		// note that last-first == length - 1 -- a different way to bound an array

//	in partition.c
void partition ( int * first, int * last, int ** , int **);
			// for the last 2 arguments, pass the ADDRESS of a pointer variable

//	in swap.s, the usual swap 2 values, given their addresses, has been optimized
void swap (int* x, int * y);
