#include "main.h"
/**
  * _isalpha - checks if argument is an alphabet characer or not
  * @c: the argument being checked
  * Return: 1 if it's alphabet character.
  * 0 if it is not.
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
