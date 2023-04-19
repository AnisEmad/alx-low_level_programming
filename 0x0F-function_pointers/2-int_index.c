#include "function_pointers.h"
/**
  * int_index - search function
  * @array: the array used to search in
  * @size: the size of the array
  * @cmp: the logic function 
  * Return: the index of the element if found
  * if no element return -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
