#include "main.h"
/**
  * get_bit - get the value of a bit at a given index
  * @n: the number used
  * @index: the poistion of the bit
  * Return: the bit we want
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int x = (63 - index) - 1;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - x);

	if (index > 63)
		return (-1);
	if (n & mask)
		return (1);
	else
		return (0);
}
