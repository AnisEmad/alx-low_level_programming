#include "main.h"
/**
  * factorial - compute factorial of a given number
  * @n: the number used
  * Return: intger
  */

int factorial(int n)
{
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
