#include "sort.h"


int readarray ( char* arr[], int limit)	// read strings until EOF (CTRL-D) or limit
{ int i; 
  char* location;		// place for scanf to store pointer
  for (i=0; i<limit; i++)
    {  if (EOF == scanf("%ms", &location))
			//m means allocate enough space, and store pointer
	  break;	// Stop loop on End Of File (CTRL-D)
//       printf ("%s, ", location);   // debug
       arr[i] = location;	// else store pointer in array
    }
    puts ("reading finished");
    return i;		// actual length  
    
}

void printarray ( char* arr[], int length)	// print an array, however you like
{	
    for (int i=0; i<length; i++)
    {  
	//print  arr[i]		<=========== DO THIS!
        printf("%s\t", arr[i]);
    }
    //printf("printarray called\n");
    puts("");
}

void freespace ( char* arr[], int length)	// free the string space allocated
{	
    for (int i=0; i<length; i++)
    {  
	free(arr[i]);
	arr[i]=NULL;
    }
}
