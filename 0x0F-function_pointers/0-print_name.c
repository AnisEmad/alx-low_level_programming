#include "function_pointers.h"
/**
  * print_name - takes function and print name
  * @name: the name to be printed
  * @f: the function used
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
