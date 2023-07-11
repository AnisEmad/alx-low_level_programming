#include "main.h"
/**
  * create_file - function that creates a file
  * @filename: name of the file
  * @text_content: the content that will be in the text
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_read;
	int len = strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	bytes_read = write(fd, text_content, len);

	if (bytes_read != len)
		return (-1);
	return (1);
}
