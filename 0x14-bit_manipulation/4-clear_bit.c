#include "main.h"
/**
  * clear_bit - set the value of a bit to 0
  * @n: the number used
  * @index: the index of a bit
  * Return: 1 on sucees -1 on failure
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index > 63)
		return (-1);
	*n &= ~mask;
	return (1);
}
