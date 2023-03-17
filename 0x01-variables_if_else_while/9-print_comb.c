#include <stdio.h>
/**
  * main - entry point
  *
  * Return: 0 if executed sucessfully, 1 if not
  */
int main(void)
{
	int n = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(n);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
