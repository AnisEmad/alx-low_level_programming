#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
  * only_num - checks if the string contains only numbers or not
  * @str: string
  * Return: 1 if only numbers, 0 if not
  */
int only_num(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
  * main - entry point
  * @argc: number of arguments
  * @argv: array of strings
  * Return: always 0
  */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!only_num(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

