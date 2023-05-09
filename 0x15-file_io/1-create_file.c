#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of the string
 */
int _strlen(char *b)
{
	int i = 0;

	if (b != NULL)
	{
		while (b[i])
		{
			i++;
		}
	}
	return (i);
}

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL-terminated string to write to the file
 *
 * Return: 1 on success, 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b_file = 0, len = _strlen(text_content);

	if (filename != 0)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len != 0)
		b_file = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
