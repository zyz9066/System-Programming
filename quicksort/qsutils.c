#include "quicksort.h"

#define		SIZELIMIT	1000	
// How big would you like your numbers to be?

void fillarray ( int arr[], int length)		// fill with random numbers
{	
    for (int i=0; i<length; i++)
      arr[i] = rand() % SIZELIMIT -50;  //want some negative numbers!
}

void printarray ( int arr[], int length)	// print an array, however you like
{	
    for (int i=0; i<length; i++)
    {  
	    // print arr[i] 
        printf("%d\t", arr[i]);
    }
    puts("");
}
