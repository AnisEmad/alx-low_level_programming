#include "main.h"

/**
  * _strncat - concatenates 2 strings using at most n bytes from 2nd string
  * @dest: the first string
  * @src: the second string
  * @n: The maximum number of bytes
  * Return: pointer to dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int d_len = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		d_len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[d_len + i] = src[i];
	dest[d_len + i] = '\0';

	return (dest);
}
