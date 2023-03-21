#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <_putchar.c>
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
	return (0);
}
#endif
