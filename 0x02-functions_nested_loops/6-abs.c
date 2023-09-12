#include "main.h"
/**
 * _abs - return the absolute value of a given integer.
 * @av: value use to find the absolute value of integer.
 *
 *
 * Return: the absolute value.
 */
int _abs(int av)
{
	if (av < 0)
	{
		return (-av);
	}
	else
	{
		return (av);
	}
}
