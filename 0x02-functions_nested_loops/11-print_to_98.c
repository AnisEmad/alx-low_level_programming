#include "main.h"
#include <stdio.h>
/**
  * print_to_98 - print numbers from n to 98
  * @n: the start point
  * Return: void
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}
	} else
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}
	}
	printf("\n");
}