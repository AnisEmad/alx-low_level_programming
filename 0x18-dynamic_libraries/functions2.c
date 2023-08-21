#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  * @n: the integer that will be used
  * Return: the absolute value
  */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}

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

/**
  * _strcmp - compares two strings
  * @s1: string 1
  * @s2: string 2
  * Return: integer to which is greater
  */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s2[i] != '\0')
		return (s1[i] - s2[i]);
	else
		return (s1[i] - s2[i]);
}
