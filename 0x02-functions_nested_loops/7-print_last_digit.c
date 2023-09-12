#include "main.h"

/**
 * print_last_digit - will print the last digit of a given number.
 * @ld: Number used to find the last digit of a number
 *
 * Description: will print the last digit of a given number. If the
 * number is a negative the value will be return unsigned int.
 *
 * Return: last digit as int value.
 */
int print_last_digit(int ld)
{
	ld %= 10;
	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar('0' + ld);
	return (ld);
}
