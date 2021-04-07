#/*# Start of file merge.a */
#
#/*# MIPSMARK 1.0 1/5/98 Copyright 1998 J. Waldron. */
#
/*  	Write a C function to merge 2 arrays, assumed to be ordered by ascending values,
	and store the result in a 3rd array, so it in turn is ordered. 
  Also write a function (merge3) to merge 3 such arrays.
    Do this by:
	calling merge twice, and 
	be sure to free() the space used by the first merge before exiting.

    Follow the function prototypes given above the cut line.
	Put both your functions between the cut lines	*/
/*# Output format must be:		*/
/*# "/-20/-10/-1/1/2/2/3/4/5/6/7/8/8/11/12/111"		*/
#include <stdio.h>       /* for printf in C programs */
#include <stdlib.h>	 /* for exit() in C programs */


#define LEN1	4
#define LEN2	5
#define LEN3	7

int* merge (const int[], int , const int[], int); //allocates and returns an arrray
int* merge3 (const int[], int, const int[], int , const int[], int); //returns allocated arrray merging 3 arrays

int main() {
  int a[LEN1] = {1,2,3,8};
  int b[LEN2] = {-1,2,4,7,11};
  int c[LEN3] = {-20,-10,5,6,8,12,111};
  int* m;       // to hold pointer to merged arrayy,  should free
  int* mp;      // point to successive result elements

  m = merge3( a, LEN1, b, LEN2, c, LEN3);
  mp = m;
  for (int i=0; i<LEN1+LEN2+LEN3; i++)
     printf ("/%d",*mp++);
free(m);
  printf("\n");
  return 0;
}

  

#/* Any changes above this line will be discarded by
# mipsmark. Put your answer between dashed lines. */
#/*-------------- start cut ----------------------- */

#/*  Student's Name: Yong Youn Kwon		Account: ykwon		*/
int* merge(const int a1[], int len1, const int a2[], int len2) {
	int *ret = malloc(sizeof(int) * (len1+len2)), *ptr = ret;
  const int *ptr1 = a1, *ptr2 = a2;
	while (ptr1 < a1 + len1 && ptr2 < a2 + len2) {
		if (*ptr1 < *ptr2) *ptr++ = *ptr1++;
		else *ptr++ = *ptr2++;
	}
	while (ptr1 < a1 + len1) *ptr++ = *ptr1++;
	while (ptr2 < a2 + len2) *ptr++ = *ptr2++;
	return ret;
}

int* merge3(const int a1[], int len1, const int a2[], int len2, const int a3[], int len3) {
  int *temp = merge(a1, len1, a2, len2), *ret = merge(temp, len1+len2, a3, len3);
  free(temp);
  return ret;
}

#/*--------------  end cut  -----------------------
# Any changes below this line will be discarded by
# mipsmark. Put your answer between dashed lines.
*/
