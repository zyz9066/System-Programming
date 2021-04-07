/* file minmax.c  ****************************************
*        a C program skeleton for the problem
*        Find the minimum and maximum values in an array
*   By Lin Jensen
*  1 February 2003
*   For: csc116 class
**********************************************************/
#include <stdio.h>

/* DATA segment: Global variables */
#define SIZE 10
        int arr[SIZE] = { -5, 0xffffface, 0x31, 52, 054, /* base 8 */
                        0, -201, 12, 0xffffff00, -1 } ;

int main ()
{  /* declare variables here */
        int mymin, mymax;               /* use these */

/* Place your solution between the cut lines */
/*------------------ start cut --------------------------*/
/* Student ------ Yong Youn Kwon            */
	/* declare ADDITIONAL variables here, AFTER "start cut" */
        mymin = mymax = *arr;	// assign first element to both
        for (int* ptr = arr+1; ptr <  arr+SIZE; ++ptr) {	// loop array
            if (*ptr < mymin) mymin = *ptr;	// update min
            if (*ptr > mymax) mymax = *ptr;	// update max
        }
/*----------------------- end cut -----------------------*/
    printf ("The minumum = %d and the %s = %d\n", mymin,"maximum", mymax);

    return 0;    /* 0 tells operating system "Normal termination" */
}   /* end main */
