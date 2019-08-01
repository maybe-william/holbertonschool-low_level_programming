#include<stdlib.h>
#include<stdio.h>

void mystart(void) __attribute__ ((constructor));

/**
 * mystart - my version of _start
 *
 */
void mystart(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
