#include "sort.h"

/*===   these functions ar for using a linked list ====
	Space will be allocated for a node consisting of 
	A pointer to the next node, followed by
	the string (after 8 bytes)
*/

int readlist ( node* link)	// read strings until EOF (CTRL-D)
		// where to store head pointer
{   int count; int nr=1;
node* last = link;  	// holds address of previous node's "next" link
char  this[41];		// BUFFER, long words will be split
node* location;

for (count=0; nr != EOF; count++)
    {  nr= scanf("%40s", this);		// puts 1 word in buffer (spaces separate)
	if (nr==EOF)break;
       location = malloc(strlen(this)+1+sizeof(void*)); //create space
       strcpy(&location->value, this);  // string follows next pointer
       last->next = location;      	// previous node links to this one
       //printf("%s_", &location->value);  // comment this out!
       last = location;
    }
    last->next = NULL;		// terminate the list!
    puts ("reading finished");
    return count;		// actual length  
    
}

void  printlist (node* head)
{
  while (head) {
    printf ("%s\t", &head->value );  // or how you want it to look
    head = head->next;
  }
  printf("\n");
}