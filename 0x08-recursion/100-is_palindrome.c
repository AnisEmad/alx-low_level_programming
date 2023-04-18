#include "main.h"
/**
  * get_len - compute the length of a string
  * @s: the string used
  * Return: the length of the string
  */
int get_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + get_len(s + 1));
}
/**
  * palindrome_check - checks if the string is palindrome or not
  * @i: start of the string
  * @j: end of the string
  * @s: the string
  * Return: 1 if palindrom 0 if not
  */
int palindrome_check(int i, int j, char *s)
{
	if (j > 0)
	{
		if (s[i] == s[j])
		{
			return (palindrome_check(i + 1, j - 1, s));
		}
		else if (s[i] != s[j])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}
/**
  * is_palindrome - checks if the string is palindrome or not
  * @s: the string
  * Return: 1 if palindrome 0 if not
  */
int is_palindrome(char *s)
{
	return (palindrome_check(0, get_len(s) - 1, s));
}
