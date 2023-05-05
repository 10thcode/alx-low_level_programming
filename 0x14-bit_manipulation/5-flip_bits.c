#include "main.h"

/**
 * flip_bits - get the number of bits you
 * would need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of flips needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while ((n > m ? n : m) != 0)
	{
		if ((n & 1) != (m & 1))
			count++;

		n >>= 1, m >>=1;
	}

	return (count);
}
