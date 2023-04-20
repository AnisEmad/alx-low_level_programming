#include "3-calc.h"
/**
  * main - entry point
  * @ac: length of number of arguments
  * @av: the arguments
  * Return: always 0
  */
int main(int ac, char *av[])
{
	int num1, num2;
	int (*fun)(int, int);
	char *c = av[2];

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*c != '+' && *c != '-' && *c != '/' && *c != '*' && *c != '%') ||
			*(c + 1) != 0)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	if ((*c == '/' || *c == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	fun = get_op_func(c);
	printf("%d\n", fun(num1, num2));
	return (0);
}
