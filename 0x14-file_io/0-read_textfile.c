#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: Name of the file to be read and print
 * @letters: letters is the number of letters it should read and print.
 * Return: int/ssize_t - IF SUCCESS: Nuber of printed characters,
 * IF FAILURE: 0.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wr, rd;
	char *buf;

	if (filename)
	{
		buf = malloc(sizeof(buf) * letters);
		if (buf)
		{
			fd = open(filename, O_RDONLY, 0700);
			if (fd == -1)
				return (0);
			rd = read(fd, buf, letters);
			if (rd == -1)
				return (0);
			wr = write(1, buf, rd);
			if (wr == -1 || wr != rd)
				return (0);
			close(fd);
			free(buf);
			return (wr);
		}
	}
	return (0);
}
