//	Header file for cs 216 array sort project 
#include <stdio.h>		// everyone might want to print...
#include <stdlib.h>
#include <string.h>
/* prototypes for the functions in various files
    prototypes don't need to name the arguments, 
    I have included some to suggest usage, but you can use whatever you want.
*/

typedef struct node_s 		// for linked list
{  struct node_s *next;		// points to next node
   char value;  		// we will allocate enough space
} node; 			// now we can declare nodes:

//	In sort.c
void  sortlist (node* headp);	// array should be sorted (by student)
		// must pass address of where head pointer is stored
void mergesort(node**);
//	in swap.s, swap 2 POINTER values, given their addresses, has been optimized
void swap (node** x, node** y);

// linked list
//	In stringutils.c

int readlist ( node* link);	// Works, to create linked list from stdin
void  printlist (node* head);	//however it looks best to you...
