#include "sort.h"

int main(){
  int length;			// actual length read
  node head= {NULL,'x'};	// pointer to first node of a linked list
// LINKED LIST testing		// the 'x' is not part of the list

  length = readlist (&head);
  printf("length = %d\n", length);
  //sortlist (&head);		// comment this out to test other parts
  //printlist (&head);
  node* headp = head.next;
  printlist(headp);
  mergesort(&headp);
  printlist(headp);
return 0;}