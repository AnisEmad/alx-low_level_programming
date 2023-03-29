#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: first string
  * @src: second string
  * Return: pointer to first string after appending
  */

char *_strcat(char *dest, char *src)
{	char *res;

	while (*dest != '\0')
	{
		*res = *dest;
		res++;
		dest++;
	}
	while (*src != '\0')
	{
		*res = *src;
		res++;
		dest++;
	}
	*res = '\0';
	return (res);
}
