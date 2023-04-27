
#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
* first - print  sentence before main
* function is executed
* This function prints out two sentences to the standard output
*/
void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
