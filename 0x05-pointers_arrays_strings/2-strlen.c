#include "main.h"

/**
  * _strlen - compute the length of the string
  * @s: Pointer to the string ( array of char)
  * Return: length of the string in int
  */
int _strlen(char *s)
{
	int cnt = 0;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}
	return (cnt);
}

