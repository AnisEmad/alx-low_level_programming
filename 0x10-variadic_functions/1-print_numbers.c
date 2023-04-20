#include "variadic_functions.h"
/**
  * print_numbers - print numbers followed by a new line
  * @separator: the string to be printed between numbers
  * @n: number of numbers
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator)
			printf("%s", separator);
	}
	printf("\n");
}
