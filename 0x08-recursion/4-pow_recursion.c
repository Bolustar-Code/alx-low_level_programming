#include <stdio.h>

/**
 * _pow_recursion - Calculates x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 * Return: x raised to the power of y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (!y)
		return (1);
	return (x * _pow_recursion(x, --y));
}
