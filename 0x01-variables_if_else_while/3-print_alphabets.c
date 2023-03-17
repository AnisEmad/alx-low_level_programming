#include <stdio.h>
/**
  * main - entry point
  *
  * Return: 0 if executed sucessfully, 1 if not
  */
int main(void)
{
	char ch = 'a';
	char ch2 = 'A';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(ch);
		ch++;
	}
	for (i = 0; i < 26; i++)
	{
		putchat(ch2);
		ch2++;
	}
	
	return (0);
}
