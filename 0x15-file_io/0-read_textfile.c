#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This Read text file print to STDOUT.
 * @filename: This is the text file being read
 * @letters: This is the number of letters to be read
 * Return: l-  This is the actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t l;
	ssize_t g;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	g = read(fd, buf, letters);
	l = write(STDOUT_FILENO, buf, g);

	free(buf);
	close(fd);
	return (l);
}
