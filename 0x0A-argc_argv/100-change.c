#include <stdlib.h>
#include <stdio.h>
/**
  * main - entry point
  * @argc: number of arguments
  * @argv: array of strings
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	int n;
	int sum = 0;
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 1)
	{
		printf("0\n");
		return (0);
	}

	num = n / 25;
	sum += num;
	n -= 25 * num;
	num = n / 10;
	sum += num;
	n -= 10 * num;
	num = n / 5;
	sum += num;
	n -= 5 * num;
	num = n / 2;
	sum += num;
	n -= 2 * num;
	num = n / 1;
	sum += num;
	n -= num;
	printf("%d\n", sum);
	return (0);
}
