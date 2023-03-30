#include "main.h"

/**
  * rot13 - encodes a string using rot13
  * @str: string used
  * Return: pointer to string
  */

char *rot13(char *str)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	for (i = 0; i < str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == input[j])
				str[i] = output[j];
		}
	}
	return (str);
}
