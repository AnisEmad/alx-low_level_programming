#include "main.h"
/**
  * print_last_digit - prints the last digit of a number
  * @n: the number used
  * Return: the value of the last digit
  */
int print_last_digit(int n)
{
	_putchar(n % 10 + '0');
	return (n % 10);
}
