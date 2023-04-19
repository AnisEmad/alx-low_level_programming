#include "calc.h"
/**
  * op_add - add two numbers
  *
  * @a: first number
  * @b: second number
  * Return: the sum of them
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - subtract two numbers
  *
  * @a: first number
  * @b: second number
  * Return: the subrraction of them
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - multiply two numbers
  *
  * @a: first number
  * @b: second number
  * Return: the multiplication of them
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - divide two numbers 
  *
  * @a: the first number
  * @b: the second number 
  * Return: the divison
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b);
}
/**
  * op_mod - compute the remainder of the division
  *
  * @a: first number
  * @b: second number
  * Return: remainder
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a % b);
}
