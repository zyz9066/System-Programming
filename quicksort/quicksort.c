#include "quicksort.h"
/*	
 *	NAME: 
 *
	The goal here is a recursive function that sorts an array.
	Feel free to choose other variable names, that are meaningful for you
	Make any other changes you want.
*/

void quicksort ( int * first, int * last)	// 2 pointers, to bounds of array to sort
		// note that last-first == length - 1 -- a different way to bound an array
{	
  int length = last - first + 1;
  int * i;				// pointers returned by partition
  int * j;
	if (length <= 1) return;	// there is nothing to do!

// now call partition, to split the array into two, with some value "between"

  partition (first, last, &i, &j);	// i & j are output, determined by partition

/*  then just quicksort those two. 
	first to i
	j to last	(or is it the other way around?)
    The worst case is that one partition will be empty,
    and the other will be length-1, so the recursion is bound to end.
*/
	quicksort(first, i);
	quicksort(j, last);
}
