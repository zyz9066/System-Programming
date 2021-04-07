#include "sort.h"

#define		SIZELIMIT	1000	
// How big would you like your numbers to be?

void fillarray ( int arr[], int length)		// fill with random numbers
{	
    for (int i=0; i<length; i++)
      arr[i] = rand() % SIZELIMIT - 50 ;  // some negative nos. -50 .. 949
}

void printarray ( int arr[], int length)	// print an array, however you like
{	
    for (int i=0; i<length; i++)
    {  
	// print the elements
    printf("%d\t", arr[i]);
    }
    // printf("\n"); might be nice
    puts("");
}
