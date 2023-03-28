#include "main.h"

/**
  * swap_int - swap the values of two integers
  * @a: the first variable
  * @b: the second variable
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
