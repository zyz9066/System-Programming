#include "sort.h"

/*	
	The goal here is to sort the array, by any method you like, 
	either ascending or descending.
	
*/
void split(node* headp, node** leftref, node** rightref) {
  node *slowp = headp, *fastp = headp->next;
  while (!fastp) {
    fastp = fastp->next;
    while (!fastp) {
      fastp = fastp->next;
      slowp = slowp->next;
    }
  }
  *leftref = headp;
  *rightref = slowp->next;
  slowp->next = NULL;
}

node* merge(node* leftp, node* rightp) {
  if (!leftp) return rightp;
  else if (!rightp) return leftp;
  node* res = NULL;
  if (strcmp(&leftp->value, &rightp->value) < 0) {
    res = leftp;
    res->next = merge(leftp->next, rightp);
  } else {
    res = rightp;
    res->next = merge(leftp, rightp->next);
  }
  return res;
}

void mergesort(node** headref) {
  node *headp = *headref, *leftp, *rightp;
  if (!headp || !headp->next) return;
  split(headp, &leftp, &rightp);
  mergesort(&leftp);
  mergesort(&rightp);
  *headref = merge(leftp, rightp);
}

void  sortlist (node* headp) {   // sort linked list - head may change
  node* prev = headp;		// can change pointer here, but no value!
  node* first= headp->next;
  node* second;
// to compare, for example, the first two words:
  while (second = first->next) {	// stop when no second
 //   printf("%s ? %s\n",&first->value, &second->value);
    if (strcmp(&first->value, &second->value)>0) {
	// addresses of the two values
	// probably want to do something, such as modifying some "next" pointers
    }
}
}