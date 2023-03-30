#include "main.h"

/**
  * leet - encodes a string into 1337
  * @str: the string used
  * Return: pointer to string
  */

char *leet(char *str)
{
	char cap[] = "aeotl";
	char pac[] = "AEOTL";
	char num[] = "43071";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == cap[j] || str[i] == pac[j])
				str[i] = num[j];
		}
	}
	return (str);
}
