#include "lists.h"

void print_before_main(void) __attribute__ ((constructor));

/**
 * print_before_main - prints a message before the main function is executed
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
