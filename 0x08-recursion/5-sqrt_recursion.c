#include "main.h"
/**
  * _sqrt_helper - helper function for sqrt
  * @n: number used
  * @m: power intial
  * Return: intger
  */
int _sqrt_helper(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (_sqrt_helper(n, m + 1));
}
/**
  * _sqrt_recursion - compute the natural square root of a number
  * @n: the number used
  * Return: the square root in intger
  */

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}
