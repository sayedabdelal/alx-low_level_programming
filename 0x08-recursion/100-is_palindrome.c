#include "main.h"

int check(char *s, int i, int len);
int _length_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _length_recursion(s)));
}

/**
 * _length_recursion - returns the length of a string
 * @s: string to calculate the length
 *
 * Return: length array char
 */
int n = 0;

int _length_recursion(char *s)
{
	if (*s > '\0')
		n += (1 + _length_recursion(s + 1));
	return (n);
}

/**
 * check - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check(s, i + 1, len - 1));
}
