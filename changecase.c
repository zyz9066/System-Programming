/*# Start of file changecase.c */

/* MIPSMARK 1.0 1/5/98 Copyright 1998 J. Waldron. */

/* Question:
   write a c function sentenceCase, which takes one argument,
   of type char* (pointer to a string) and changes the case
   of all letters in the string, so that the first character
   is capitalized (UPPERCASE) and all the remaining letters
   are lower case.
   Do not refer to the variable "teststr"
*/
/*# Output format must be:		*/
/*# "Look out for capslock!"		*/
#include <stdio.h>       /* for printf in C programs */


char teststr[] = "look OUT For CAPSlOCK!\n";

/* Any changes above this line will be discarded by
# mipsmark. Put your answer between dashed lines. */
/*-------------- start cut ----------------------- */

/*  Student's Name: Yong Youn Kwon	Account: ykwon		*/

void sentenceCase(char* s)
{
	/* YOUR CODE GOES HERE */
	if (*s >= 'a' && *s <= 'z') *s &= 0xDF; // capitalized first char
	for (char* ptr = s+1; *ptr; ++ptr)
		if (*ptr >= 'A' && *ptr <= 'Z')
			*ptr |= 0x20; // set other chars in lower case 
}

/*--------------  end cut  -----------------------
# Any changes below this line will be discarded by
# mipsmark. Put your answer between dashed lines.*/

int main()
{
/* --- uncomment this code to read your own test string  */
/*
    puts("Type your own sentence");	// NEVER use gets!
    fgets(teststr, 24, stdin);		// reads at most 23 chars, terminates with '\0' may include a newline
*/
   sentenceCase(teststr);	/* Calling student function */
   puts(teststr);		/* print result  */
   return 0;
}

/*# End of file changecase.c		*/
