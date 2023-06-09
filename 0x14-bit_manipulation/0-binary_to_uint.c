#include "main.h"
/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: pointer to a string of 0 and 1
  * Return: converted number or 0
  * if there is one or more chars in the string b
  * that is not 0 or 1
  * or b is null
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;
	int pow = 1;

	if (!b)
		return (0);
	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
		i++;
	}
	b--;

	while (i > 0)
	{
		num += (*b - 48) * pow;
		pow *= 2;
		b--;
		i--;
	}
	return (num);
}
