#include "main.h"
/**
  * _strlen_recursion - compute teh length of a string
  * @s : pointer to a string
  * Return: int elngth of a string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1) + (_strlen_recursion(++s));
}
