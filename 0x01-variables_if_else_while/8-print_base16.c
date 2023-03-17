#include <stdio.h>
/**
  * main - entry point
  *
  * Return: 0 if executed successfully, 1 if not
  */
int main(void)
{
	char ch = 'a';
	int n = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(n);
		n++;
	}
	for (i = 0; i < 6; i++)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
