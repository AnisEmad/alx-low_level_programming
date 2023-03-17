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
	int k;

	for (k = 0; k < 8; k++)
	{
		for (i = k + 1; i < 9; i++)
		{
			for (j = i + 1; j < 10; j++)
			{
				putchar(k + 48);
				putchar(i + 48);
				putchar(j + 48);
				if (k != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
