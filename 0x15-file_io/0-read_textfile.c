#include "main.h"
/**
  * read_textfile - reads a text file and prints it to posix stantard output
  * @filename: file name
  * @letters: number of letters
  * Return: number of lettters
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	bytes_read = read(fd, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(fd);
	free(buffer);

	return (bytes_written);
}
