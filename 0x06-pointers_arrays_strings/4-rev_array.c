#include "main.h"

/**
  * reverse_array - reverse elements of an array
  * @a: pointer to array
  * n: number of elements
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		int tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
