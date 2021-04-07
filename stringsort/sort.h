//	Header file for cs 216 array of strings sort project 
#include <stdio.h>		// everyone might want to print...
#include <stdlib.h>
#include <string.h>
/* prototypes for the functions in various files
    prototypes don't need to name the arguments, 
    I have included some to suggest usage, but you can use whatever you want.
*/
//	In stringutils.c
int readarray ( char* arr[], int limit);// name of an array, length -- fill with 
					// pointers to strings read (to free...)
void printarray(char* a[] , int);	// name of an array, length -- print an array
void freespace ( char* arr[], int length);
//	In sort.c
void sort ( char* first[], int length);	// array should be sorted (by student)

//	in swap.s,  swap 2 POINTER values, given their addresses, has been optimized
void swap (char** x, char** y);

// NOTE This is a DIFFERENT version, since pointers are 8 bytes (64 bits)