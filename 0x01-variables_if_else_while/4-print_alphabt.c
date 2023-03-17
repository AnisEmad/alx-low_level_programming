#include <stdio.h>
/**
  * main - entry point
  *
  * Return: 0 if executed sucessfully, 1 if not
  */
int main(void)
{
	char ch = 'a';
	int i;
	
	for (i = 0; i < 26; i++)
	{
		if (ch == 'q' || ch == 'e')
			;
		else
			putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
