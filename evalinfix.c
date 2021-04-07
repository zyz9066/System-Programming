/*# Start of file evalinfix.a */

/*# MIPSMARK 1.0 1/5/98 Copyright 1998 J. Waldron. */

/*  write a function to evaluate an infix arithmetic expression,
 *    which must be FULLY PARENTHESIZED:
 * 
	int inval(FILE *)
    You may call 
        int gettoken(FILE *)
	(passing it the same file argument)	
    Example input:
        2+2
        (1 + 22)/(77-74)
	2-(3*		#invalid, not enough numbers, will be handled by gettoken
	42*)86(		#bad form, print "Invalid syntax" and exit(0)
*/
/*# Output format must be:		*/
/*# "Evaluates to 42"		*/

#include <stdio.h>       /* for printf in C programs */
#include <stdlib.h>	 /* for exit() in C programs */

#define	LEN 30
char  testing[] = "2+(80/2)" ;

/*   gettoken for arithmetic expression. 
 * 	Only recognize + - * / ( ) and digits.
  * 	Any other character ignored, such as space, must be used to separate consecutive numbers
 * 	EXIT on end of line or string
 *   Return value:
 * 	1. non-negative integer  OR
 * 	2. negative of single character token
 * 	   uses fgetc, ungetc file functions, for stdin, or fmemopen for strings in memory
*/
int gettoken (FILE * f) {
    int sum = 0;
  while(1) {
    char ch = fgetc(f);		// first unprocessed char
    if (ch >= '0' && ch <= '9')
    {	sum = ch&0xF;		// start of number
	ch = fgetc(f);
        while (ch >= '0' && ch <= '9')
	  {  sum = sum*10 + (ch&0xF);
	     ch = fgetc(f);
	  }
	ungetc (ch, f);      // finished number, do not consume non-numeral
	return sum;
    }
    else if (ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='('||ch==')')
      return -ch;		// found an operator
    else if (ch==0 || ch=='\n')	// no more characters
    {	puts("--no more input--"); 
	exit(0);	
    }
  } 	// end while. Ignoring space or other chars.
}

int inval(FILE *f);
FILE *fmemopen(void*,size_t,const char*); // needed for c99

int main() {
//  FILE * membuf = fmemopen(testing, LEN,"r");
    puts("Type an infix arithmetic expression, use ()s");
   printf ("Evaluates to %d\n", inval(stdin));
  return 0;
}

/* Any changes above this line will be discarded by
 mipsmark. Put your answer between dashed lines. */
/*-------------- start cut ----------------------- */

/*  Student's Name: Yong Youn Kwon					*/
int apply(int operator, int op1, int op2) {
	switch (operator) {
		case '+':
			return op1 + op2;
		case '-':
			return op1 - op2;
		case '*':
			return op1 * op2;
		case '/':
			if (!op2) { puts("Division by zero is invalid."); exit(0); }
			return op1 / op2;
		default:
			puts("Invalid."); exit(0);
	}
}
int isOuterMost = 1;
int inval(FILE *f) {
	if (isOuterMost) {
		isOuterMost = 0;
		int op1 = inval(f), operator = -gettoken(f), op2 = inval(f);
		return apply(operator, op1, op2);
	}
	int token = gettoken(f);
	if (-token == '(') {
		int op1 = inval(f), operator = -gettoken(f), op2 = inval(f);
		gettoken(f);
		return apply(operator, op1, op2);
	} else if (token >= 0) return token;
	else { puts("Invalid."); exit(0); }
}

/*--------------  end cut  -----------------------
 End of file evalinfix.c		*/
