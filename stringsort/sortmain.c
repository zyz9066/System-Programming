#include "sort.h"

#define	LENGTH	100	/* Maximum number of words */


int main(){
  char* a[LENGTH];
  int length;		// actual length read
  length = readarray (a, LENGTH);	// fill the arrray randomly
  printarray(a, length);		// show initial array
  sort (a, length);			// sort it
  printarray(a, length);		// show final array
  freespace (a, length);		// free the allocated space
  //printarray(a, 5);		// now what?  YOU MAY DELETE THIS
return 0;}