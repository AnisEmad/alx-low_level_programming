#include "main.h"

/**
  * _strncpy - copies a string
  * @dest: 1st string
  * @src: the string to be copied
  * @n: The maimum number of bytes to be copies
  * Return: pointer to dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
