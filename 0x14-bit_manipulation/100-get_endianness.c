#include "main.h"

/**
 * get_endianness - Progm that checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int endia = 1;
	char *b = (char *)&endia;

	if (*b == 1)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
