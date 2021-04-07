#include "sort.h"

/*	
	The goal here is to sort the array, by any method you like, 
	either ascending or descending.
	
*/

int partition(char** a, int length) {
  char **pivot = a, **up = a+1, **down = a+length-1;
  while (up <= down) {
    while (up <= down && strcmp(*up, *pivot) <= 0) ++up;
    while (up <= down && strcmp(*down, *pivot) >= 0) --down;
    if (up < down) swap(up, down);
  }
  if (pivot < down) swap(pivot, down);
  return down - a;
}

void sort ( char** a, int  length)	
{   /*for (int i=1; i< length; i+=2) {
    // 			this just swaps pairs of elements
    if (strcmp(a[i-1],a[i]) > 0) 
	swap(a+i-1, a+i);
  }  */
  if (length <= 1) return;
  int idx = partition(a, length);
  sort(a, idx);
  sort(a+idx+1, length-idx-1);
}