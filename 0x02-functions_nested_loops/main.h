#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

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
  * print_putchar - prints the word _putchar
  *
  * Return: On success 0.
  * On error, 1 is returned.
  */
int print_putchar(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
}
#endif
