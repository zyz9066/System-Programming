#include "quicksort.h"
#include <time.h>

#define	LENGTH	12

int main(){
  int a[LENGTH];
  srand(time(NULL));		// set seed for rand with unix time,
				//otherwise same sequence each run
  printf("First random number is %d\n", rand() );
  fillarray (a, LENGTH);		// fill the arrray randomly
  printarray(a, LENGTH);		// show initial array
  quicksort (a, a+LENGTH-1);		// sort it (giving pointers to first and last element)
  printarray(a, LENGTH);		// show final array
return 0;}
