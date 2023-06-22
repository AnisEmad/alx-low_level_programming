#include "variadic_functions.h"
/**
  * print_strings - Prints a variable number of strings followed by a newline.
  * @separator: The string to be printed between the strings (or NULL for no separator).
  * @n: The number of strings passed to the function.
  * @...: Variable arguments representing the strings to be printed.
  *
  * Description: This function prints a variable number of strings followed by
  * a newline. If a string is NULL, it will be printed as "(nil)". The separator
  * string will be printed between each pair of strings, except for the last one.
  * This function uses variable arguments and relies on the stdarg.h header.
  * Note: The caller must provide the correct number of arguments (n).
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	
	printf("\n");
	va_end(args);
}
