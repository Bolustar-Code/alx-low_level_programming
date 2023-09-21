#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int numbers;

	numbers = n;

	if (n < 0)
	{
		_putchar('-');
		numbers = -n;
	}

	if (numbers / 10 != 0)
	{
		print_number(numbers / 10);
	}
	_putchar((numbers % 10) + '0');
}
