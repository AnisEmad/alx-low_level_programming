#include "main.h"
/**
  * _islower - checks if the character is lower case or not
  * &c - the character in asci code
  * Return: 1 if it's lower.
  * 0 if it's not.
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
