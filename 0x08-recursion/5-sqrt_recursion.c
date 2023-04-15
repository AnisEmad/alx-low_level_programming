#include "main.h"
/**
  * _sqrt_recursion - compute natural square root of a number
  * @n: number used
  * @m: helper number
  * Return: int - square root of the number
  */
int _sqrt_recursion(int n, int m = 1))
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (_sqrt_recursion(n, m + 1));
}
