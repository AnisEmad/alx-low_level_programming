#include "varidic_functions.h"
/**
  * print_all - Prints arguments of different types based on the provided format.
  * @format: A list of types of arguments passed to the function.
  *          c: char
  *          c: char
  *          f: float
  *          s: char * (if the string is NULL, print (nil) instead)
  *          Any other char should be ignored.
  */	
void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);

	int i = 0;
	char *s;
	char c;
	float f;

	while (format && format[i])
	{
		if (i > 0)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				i++;
			continue;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
