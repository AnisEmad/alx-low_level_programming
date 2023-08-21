#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
  * _strlen - compute the length of the string
  * @s: Pointer to the string ( array of char)
  * Return: length of the string in int
  */
int _strlen(char *s)
{
	int cnt = 0;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}
	return (cnt);
}

/**
  * _puts - prints a string followed by a new line
  * @str: pointer to a string
  * Return: void
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
  * _islower - checks if the character is lower case or not
  * @c: the character in asci code
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

/**
  * _isalpha - checks if argument is an alphabet characer or not
  * @c: the argument being checked
  * Return: 1 if it's alphabet character.
  * 0 if it is not.
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
