#include "main.h"
/**
  * get_string - gets a pointer to the end of the string
  * @s: the string used
  * Return: pointer to a string
  */
char *get_string(char *s)
{
	if (*s == '\0')
		return (--s);
	get_string(s + 1);
}
/**
  * palindrome - helper function
  * @s1: pointer to the start of the string
  * @s2: pointer to the end of the string
  * Return: 1 if it's palindrome, 0 if not
  */
int palindrome(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	return (palindrome(s1 + 1, s2 - 1));
}
/**
  * is_palindrome - checks if the string is palindrome or not
  * @s: the string used
  * Return: 1 if it's palindrome, 0 if not
  */

int is_palindrome(char *s)
{
	char *s2 = get_string(s);

	return (palindrome(s, s2));
}
