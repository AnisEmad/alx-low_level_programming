#include "main.h"
/**
  * _puts_recursion - prints a string follwed by a new line
  * @s : pointer to the string
  * Return: void
  */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
		return;
	s++;
	_puts_recursion(s);
}
