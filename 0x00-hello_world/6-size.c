#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A c program prints with printf a size of data type
 *
 * Return: Always 0 (Sucsses)
*/
int main(void)
{
	printf("Size of a char: %lubyte(s)\n", sizeof(char));
       	printf("Size of an int: %lubyte(s)\n", sizeof(int));
       	printf("Size of a long int: %lubyte(s)\n", sizeof(long int));
	printf("Size of a long long int:%lu byte(s)\n", sizeof(long long int));
       	printf("Size of a float:%lu byte(s)\n", sizeof(float));
	return (0);
}

