#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
  * main - entry point
  *
  * Return: 1 if executed sucessfully
  */
int main(void)
{
	char word[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, word, strnlen(word, sizeof(word)));
	return (1);
}
