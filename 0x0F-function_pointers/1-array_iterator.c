#include "function_pointers.h"
/**
  * array_iterator - executes a function on every element of the array
  * @array: the array used
  * @size: the size of the array
  * @action: the function used
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
