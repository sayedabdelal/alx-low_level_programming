#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: number of bytes read/priented
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t b_file;
	char buf[BUFSIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	b_file = read(fd, &buf[0], letters);
	b_file = write(STDOUT_FILENO, &buf[0], b_file);
	close(fd);
	return (b_file);
}
