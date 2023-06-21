#include "function_pointers.h"
/**
  * int_index - function that searches for an integer
  * @array: array used
  * @size: size of the array
  * @cmp: the function used to find that integer
  * Return: integer
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
