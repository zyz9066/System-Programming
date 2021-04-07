/*# Start of file merge.c */

/*# MIPSMARK 1.0 1/5/98 Copyright 1998 J. Waldron. */

/*  	Write a C function to merge 2 arrays, assumed to be ordered by ascending values,
	and store the result in a 3rd array, so it in turn is ordered. 
    Follow the function prototype given above the cut line.
	Put your entire function between thge cut lines	*/
/*# Output format must be:		*/
/*# "/-1/1/2/2/3/4/7/8/11"		*/
#include <stdio.h>       /* for printf in C programs */
#include <stdlib.h>	 /* for exit() in C programs */


#define LEN1	4
#define LEN2	5

int* merge (const int[], int , const int[], int); //allocates and returns an arrray

int main() {
  int a[LEN1] = {1,2,3,8};
  int b[LEN2] = {-1,2,4,7,11};
  int* m;	// to hold pointer to merged arrayy,  should free
  int* mp;	// point to successive result elements

  m = merge( a, LEN1, b, LEN2);
  mp = m;
  for (int i=0; i<LEN1+LEN2; i++)
     printf ("/%d",*mp++);
  free(m);
  printf("\n");
  return 0;
}

  
/* Any changes above this line will be discarded by
 mipsmark. Put your answer between dashed lines. */
/*-------------- start cut ----------------------- */

/*  Student's Name: Yong Youn Kwon				*/
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


/*--------------  end cut  -----------------------
# Any changes below this line will be discarded by
# mipsmark. Put your answer between dashed lines.

   End of file merge.c		*/
