#include "main.h"

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
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] == '\0')
		return (-1);
	else
		return (1);
}
