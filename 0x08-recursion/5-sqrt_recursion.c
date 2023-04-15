#include "main.h"
/**
  * _sqrt_reco - compute square root
  * @n: number used
  * @m: help
  * Return: int
  */
int _sqrt_reco(int n, int m)
{
	if (n / m == m)
		return (m);
	if (m * m > n)
		return (-1);
	return (_sqrt_reco(n, m + 1));
}
/**
  * _sqrt_recursion - compute natural square root of a number
  * @n: number used
  * Return: int - square root of the number
  */
int _sqrt_recursion(int n)
{
	return (_sqrt_reco(n, 1));
}
