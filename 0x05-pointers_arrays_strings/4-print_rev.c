#include "main.h"

/**
  * print_rev - prints a string in reverse order
  * @s: pointer to string
  * Return: void
  */

void print_rev(char *s)
{
	int cnt = 0;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}
	while (cnt > 0)
	{
		s--;
		_putchar(*s);
		cnt--;
	}
	_putchar('\n');
}
