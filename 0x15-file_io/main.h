#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#define BUFSIZE 1024

int validate_args(int arg);
int open_file(const char *filename, int flags, mode_t mode);
int copy_file(int fd_from, int fd_to);
void close_file(int fd);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
#endif
