#include <stdio.h>
/**
  * main - entry point
  *
  * Return: 0 if executed successfully, 1 if not.
  */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + 48);
			putchar(j + 48);
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
