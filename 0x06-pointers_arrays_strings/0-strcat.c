#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: first string
  * @src: second string
  * Return: pointer to first string after appending
  */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (&dest);
}
