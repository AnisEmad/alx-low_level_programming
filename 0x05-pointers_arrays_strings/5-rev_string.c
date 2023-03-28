#include "main.h"

/**
  * rev_string - reverse a string
  * @s: pointer to string
  * Return: void
  */

void rev_string(char *s)
{
	int cnt = 0;
	char *str;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}
	while (cnt > 0)
	{
		s--;
		*str = *s;
		cnt--;
	}
	s = str;
}
