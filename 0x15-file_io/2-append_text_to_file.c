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
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file to build
 * @text_content: the text to file
 *
 * Return: 1 on success 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b_file = 0, len = _strlen(text_content);

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len != NULL)
		b_file = write(fd, text_content, len);
	close(fd);
	return (b_file == len ? 1 : -1);
