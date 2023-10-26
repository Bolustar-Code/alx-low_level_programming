#include "main.h"

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convetnum = 0;

	if (b == NULL)
	return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		return (0);
		convetnum = (convetnum << 1) | (*b - '0');
		b++;
	}
	return (convetnum);
}
