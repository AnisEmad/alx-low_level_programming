#include "main.h"
/**
  * times_table - prints the 9 times table starting with 0
  *
  * Return: void
  */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			char c = (i * j) % 10 + '0';
			char c2 = ((i * j) / 10) % 10 + '0';

			if (j == '0')
			{
				_putchar(0);
			} else if (c2 != '0')
			{
				_putchar(' ');
				_putchar(c2);
				_putchar(c);
			} else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(c);
			}
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
