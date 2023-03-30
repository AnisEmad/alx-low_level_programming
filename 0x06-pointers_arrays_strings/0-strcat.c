#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: first string
  * @src: second string
  * Return: pointer to first string after appending
  */

char *_strcat(char *dest, char *src)
{
	int d_len = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		d_len++;
	}
	for (i = 0; src[i] != '\0'; i++)
		dest[d_len + i] = src[i];
	dest[d_len + i] = '\0';
	return (dest);
}
