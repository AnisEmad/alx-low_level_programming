#include <stdio.h>
/**
  * main - entry point
  *
  * Return: 0 if executed succesfully
  */
int main(void)
{
	char ch = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
