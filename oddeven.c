/*# Start of file oddeven.c */

/*# MIPSMARK 1.0 1/5/98 Copyright 1998 J. Waldron. */

/*  write a function "rearrange" that will rearrange the numbers in an array,
	such that all the even numbers come first.
	You may assume that the array will contain both odd and even numbers.
    USE the function "swap" provided. It will exchange the two integer values 
	pointed to by its two arguments. 
	Use this in "rearrange" A goal is to minimize the number of swaps.
    write a function "firstodd" that will return the index of the first 
	odd number in an array
    write a function "sum" that will sum the numbers in an array

The main program will use these functions to print the sum of even numbers
	and the sum of odd numbers. Each group of numbers may appear in any order.
*/
/*# Output format must be:		*/
/*# "evens=20 odds=25"		*/
#include <stdio.h>       /* for printf in C programs */
#include <stdlib.h>	 /* for exit() in C programs */

#define LENGTH	9

void rearrange	(int a[], int length);  // use swap to put even numbers first
int  firstodd 	(const int a[], int length);  // return index of first odd number in a
int  sum	(const int a[], int length);  // sum the numbers in a

int swapcount = 0;		// initalized global

void swap(int* x,int* y)	// swap the values pointed to
{   int	temp = *x;
	*x = *y;
	*y = temp;
	swapcount++;		// count how many times called
}

int main() {
  int arr[LENGTH] = {1,2,3,4,5,6,7,8,9};
  int fo;	// index of first odd, also number of even elements

  rearrange (arr, LENGTH);     	// Student's work
  // show what the student did
  printf("---Your rearranged array---\n");
  for (int i=0; i< LENGTH; i++)
    printf("%d,",arr[i]);
  printf("\n---------------------------\n");
  
  fo = firstodd(arr, LENGTH);	// Student's work
  printf("---- firstodd returns %d ----\n", fo);

  printf("Did %d swaps\n", swapcount);
  printf("evens=%d odds=%d\n", sum(arr, fo), sum(arr+fo, LENGTH-fo));
  return 0;
}

  
/*-------------- start cut ----------------------- */

/*  Student's Name: Yong Youn Kwon			*/
void rearrange(int a[], int length) {
	// init pointer to front and behind
	int  *head = a, *tail = a + length - 1;
	while (head < tail) {	// while two pointers not across
		while (!(*head & 1)) ++head;	// find odd from front
		while ((*tail & 1)) --tail;	// find even from behind
		if (head < tail) swap(head++, tail--);	// swap
	}
}

int firstodd(const int a[], int length) {
	int *ptr = a;	// init pointer
	while (!(*ptr & 1) && ptr < a + length) ++ptr;	// find odd
	return ptr - a;	// return position
}

int sum(const int a[], int length) {
	int *ptr = a, sum = 0;	// init pointer and sum=0
	while (ptr < a + length) sum += *ptr++;	// loop array
	return sum;	// return sum
}
/*--------------  end cut  -----------------------
# End of file oddeven.c		*/
