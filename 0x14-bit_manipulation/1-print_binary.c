#include "main.h"
/**
  * print_binary - prints the binary representation of anumber
  * @n: number used
  * Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leading_one = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask > 0)
	{
		if (n & mask)
		{
			leading_one = 1;
			_putchar('1');
		} else if (leading_one)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
