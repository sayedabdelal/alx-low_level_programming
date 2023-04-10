#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int id;

	for (id = 0; id < argc; id++)
	{
		printf("%s\n", argv[id]);
	}

	return (0);
}
