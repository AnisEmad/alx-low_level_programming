#include "main.h"
/**
  * set_bit - set the value of a bit to 1
  * @n: the number used
  * @index: the index of the specfic bit
  * Return: 1 on success -1 on failer
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index > 63)
		return (-1);
	*n |= mask;
	return (1);
}
