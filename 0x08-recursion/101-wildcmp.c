#include "main.h"
/**
  * wildcmp - compare two strings 
  * @s1: string 1
  * @s2: string 2
  * Return: 1 if identical , 0 if not
  */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (1);
	if (*s1 != *s2 && *s2 != '*')
		return (0);
	if (*s1 != *s2 && *s2 == '*')
		if (wildcmp(s1, ++s2))
