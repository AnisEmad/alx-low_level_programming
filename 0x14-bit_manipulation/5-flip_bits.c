#include "main.h"
/**
  * flip_bits - calculate the number of bits needed to change to be a number
  * @n: first number
  * @m: second number
  * Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	unsigned int sum = 0;

	while (mask > 0)
	{
		if (((n & mask) ^ (m & mask)) != 0)
			sum++;
		mask >>= 1;
	}
	return (sum);
}
