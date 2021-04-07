#include "sort.h"

/*	
# Your NAME: Yong Youn Kwon

The goal here is to sort the array, by any method you like, 
	either ascending or descending.
	
*/

void merge(int* a, int length) {
  int half = length/2, n1 = half, n2 = length-half, left[n1], right[n2];
  for (int i = 0; i < n1; ++i) left[i] = a[i];
  for (int i = 0; i < n2; ++i) right[i] = a[half+i];
  int i = 0, j = 0, k = 0;
  while (i < n1 && j < n2) {
    if (left[i] < right[j]) a[k++] = left[i++];
    else a[k++] = right[j++];
  }
  while (i < n1) a[k++] = left[i++];
  while (j < n2) a[k++] = right[j++];
}

void sort ( int * a, int  length)	
{	/*
  for (int i=1; i< length; i+=2) {
    // 			this just swaps pairs of elements
    if (a[i-1]>a[i]) swap(a+i-1, a+i);
  }*/
  if (length <= 1) return;
  int half = length / 2;
  sort(a, half);
  sort(a+half, length-half);
  merge(a, length);
}
/*	Post-condition should be:
 * 	where  0 <= i < j < length,
 * 	a[i] <= a[j]
*/