#include "main.h"

/**
  * cap_string - capitalizes all words of a string
  * @str: the string used
  * Return: pointer to string
  */

char *cap_string(char *str)
{
	int i;

	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	for (i = 1; str[i] != '\0'; i++)
	{
		if (! (str[i - 1] >= 97 && str[0] <= 122))
		{
			if (! (str[i - 1] >= 65 && str[i - 1] <= 90))
			{
				if (str[i] >= 97 && str[0] <= 122)
					str[i] -= 32;
			}
		}
	}

	return (str);
}
