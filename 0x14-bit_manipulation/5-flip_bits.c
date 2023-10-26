#include "main.h"

/**
 * flip_bits - Progm that counts
 * the number of bits to flip to transform one number to another.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number_bit = n ^ m;
	unsigned int countnum = 0;

	while (number_bit > 0)
	{
		countnum += number_bit & 1;
		number_bit >>= 1;
	}

	return (countnum);
}
