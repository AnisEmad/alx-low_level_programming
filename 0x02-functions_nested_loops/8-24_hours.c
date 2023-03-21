#include "main.h"
/**
  * jack_bauer - prints every minute of the day
  *
  * Return: void
  */
void jack_bauer(void)
{
	int min1 = 0;
	int min2 = 0;
	int h1 = 0;
	int h2 = 0;

	while (!(h1 == 2 && h2 == 4 && min1 == 0 && min2 == 0))
	{
		_putchar(h1 + '0');
		_putchar(h2 + '0');
		_putchar(':');
		_putchar(min1 + '0');
		_putchar(min2 + '0');
		_putchar('\n');
		min2++;
		if (min2 == 10)
		{
			min2 = 0;
			min1++;
		}
		if (min1 == 6)
		{
			min1 = 0;
			h2++;
		}
		if (h2 == 10)
		{
			h2 = 0;
			h1++;
		}

	}
}
