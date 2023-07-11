#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
  * _close - close a file descriptor 
  * @fd: file descriptor 
  * Return: 0 on success, -1 on faiure
  */
int _close(int fd)
{
	if (!close(fd))
		return (0);
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (-1);
}

/**
  * _read - read from a file and print an error message
  * @filename: name of the file
  * @fd: file descriptor 
  * @buffer: buffer to write to
  * count: number of bytes to read
  * Return: number of byets read, -1 on failure
  */
ssize_t _read(const char *filename, int fd, char *buffer, size_t count)
{
	ssize_t bytes_read = read(fd, buffer, count);

	if (bytes_read > -1)
		return (bytes_read);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	return (-1);
}

/**
  * _write - write to a file 
  * @filename: the name of the file to write to 
  * @fd: the file descriptor
  * @buffer: the buffer used
  * @count: number of bytes to write
  *
  * Return number of bytes written, -1 on failure
  */
ssize_t _write(const char *filename, int fd, const char *buffer, size_t count)
{
	ssize_t bytes_written = write(fd, buffer, count);

	if (bytes_written > -1)
		return (bytes_written);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	return (-1);
}


/**
  * main - entry point
  *
  * Return: Always 0.
  */

int main(int ac, char **av)
{
	int fd1, fd2;
	ssize_t bytes = 0;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	
	fd1 = open(av[1], O_RDONLY);

	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		_close(fd1);
		exit(99);
	}
	while ((bytes = _read(av[1], fd1, buffer, 1024)));
	{
		if (bytes < 0)
		{
			_close(fd1);
			_close(fd2);
			exit(98);
		}
		if (_write(av[2], fd2, buffer, bytes) < 0)
		{
			_close(fd1);
			_close(fd2);
			exit(99);
		}
	}

	if ((_close(fd1) | _close(fd2)) < 0)
		exit(100);
	return (0);
}
