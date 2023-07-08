#include "main.h"
/**
  * print_binary - prints the binary representation of anumber
  * @n: number used
  * Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 1 << 31; i > 0; i = i / 2)
	{
		if ((n & i) && !flag)
		{
			flag = 1;
			_putchar('1');
		} else if (flag)
		{
			(n & i) ? _putchar('1') : _putchar('0');
		}
	}
}
