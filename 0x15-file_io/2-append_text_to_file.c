#include "main.h"
/**
  * append_text_to_file - appends text at the end of a file
  * @filename: name of the file used
  * @text_content: contet appended
  * Return: 1 on sucess, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byets = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	byets = write(fd, text_content, strlen(text_content));

	close(fd);
	if (byets < 0)
		return (-1);
	return (1);
}

