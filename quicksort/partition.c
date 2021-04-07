#include "quicksort.h"


/*	
	The goal here is to rearrange the array, with a minimum of swaps,
	so that one chosen "pivot" element is between two partitions, and
	*  no value larger than it is in one partition, while
	*  no value smaller is in the other
	
	Please feel free to RENAME variables to ones that make sense to you
*/

void partition ( int * first, int * last, int ** last1, int ** first2)
{					// for output, see end of this file

  int * up = first;		// pointer variables, to move up 
  int * down = last;		// .. and down the array
  int length = last - first + 1;
  int pivotindex = rand() % length;	// pick an index < length at random
  int *pivotpointer = first+pivotindex;	// or, if you like, &first[pivotindex]
  int pivot = first[pivotindex];		// you may or may not want to use a variable for this
 // FOR DEBUGGING, uncomment this statement:
 //   printf("pivot is %d\n", pivot);
 //
  //  YOUR TURN! go right(up) until you find a value that should come after pivot (be greater)
	while (up <= down) {
		while (up <= down && *up <= pivot) ++up;
 //		go left(down) until you find a value that should come BEFORE pivot (be less)
		while (up <= down && *down >= pivot) --down;
 //	then, if still (up < down), they are out of order, swap them
 //		and repeat
		if (up < down) swap(up, down);
	}
 /*	else, ALMOST done, you should have 2 arrays (partitions)
		from first to down, values BEFORE or == the pivot
		from up to last,  pivot BEFORE or == the values
	pivot is likely to be in one of them.
		so, swap it with the value at the end of its partition nearest the middle,
		AND move that pointer so the pivot is now BETWEEN the partitions
	
	finally, we have to output the new limits, to the addresses given by the last 2 arguments.
	This is probably not the correct order: 
 */
	if (pivotpointer - up > 0) { swap(pivotpointer, up); *last1  = down; *first2 = up+1; }
	else if (down - pivotpointer > 0) { swap(pivotpointer, down); *last1  = down-1; *first2 = up; }
	else { *last1 = down; *first2 = up; }
  //		until you fill in the code, these values will give 1 element partitions, avoiding endless recursion!
}
