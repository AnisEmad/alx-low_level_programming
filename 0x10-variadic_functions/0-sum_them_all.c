#include "variadic_functions.h"
/**
  * sum_them_all - compute the sum of all its parameters
  * @n: number of parameters
  * Return: sum of them
  */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list ap;
	int i, sum;

	va_start (ap, count);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);

	va_end (ap);
	return (sum);
}
