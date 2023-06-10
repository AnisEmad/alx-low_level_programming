#include <stdlib.h>
#include <stdio.h>
/**
  * main - entry point
  * @argc: number of args
  * @argv: array of strings
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc - 1 < 2)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	printf("%d\n", n1 * n2);
	return (0);
}
