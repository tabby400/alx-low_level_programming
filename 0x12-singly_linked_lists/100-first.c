#include <stdio.h>

void __attribute__((constructor)) b4main(void);

/**
 * b4main - prints the string before main function is
 *           executed
 *
 */

void b4main(void)
{
	printf("You're beat! and yet, you must allow\n");
	printf("I bore my house upon my back!\n");
}
