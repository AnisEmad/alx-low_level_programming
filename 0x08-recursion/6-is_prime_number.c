#include "main.h"
/**
  * prime_help - helper function
  * @n: number checked
  * @m: number used to help
  * Return: 1 if it's prime, otherwise 0
  */

int prime_help(int n, int m)
{
	if (m == 1)
		return (1);
	if (m == 0)
		return (0);
	if (n % m == 0)
		return (0);
	return (prime_help(n, m - 1));
}
/**
  * is_prime_number - checks if the number is prime or not
  * @n: the number used
  * Return: 1 if it's prime, otherwise 0
  */

int is_prime_number(int n)
{	
	if (n <= 0)
		return (0);
	return (prime_help(n, n - 1));
}
