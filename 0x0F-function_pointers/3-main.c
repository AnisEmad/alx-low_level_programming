#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
  * main - entry point
  * @argc: argument count
  * @argv: argument array
  * Return: always zero
  */

int main(int argc, char *argv[])
{
	int n1, n2;
	int (*p)(int, int);

	if (argc != 4 && argv[2] + 1 == '\0')
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (n2 == 0 && (p == op_div || p == op_mod))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", p(n1, n2));

	return (0);
}
