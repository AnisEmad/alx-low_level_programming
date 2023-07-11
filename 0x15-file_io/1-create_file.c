#include "main.h"
/**
  * _strlen - compute the length of  a string
  * @str: the string used
  * Return: length of the str, or -1 if str is null
  */
ssize_t _strlen(const char *str)
{
	ssize_t len = 0;

	if (!str)
		return (-1);
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
/**
  * create_file - function that creates a file
  * @filename: name of the file
  * @text_content: the content that will be in the text
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_read = 0;
	int len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	bytes_read = write(fd, text_content, len);

	close(fd);

	if (bytes_read < 0)
		return (-1);
	return (1);
}
