#include "main.h"
/**
  * prime - helps
  * @n: number to be checked
  * @m: number diveded
  * Return: int
  */
int prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0)
		return (0);
	return (prime(n, m - 1));
}
/**
  * is_prime_number - checks if it is a prime number
  * @n: number used
  * Return: 1 if prime 0 if not
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
