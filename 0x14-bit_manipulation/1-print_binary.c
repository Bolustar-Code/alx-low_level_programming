#include "main.h"

/**
 * print_binary - Function prints the binary representation of a number
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
	int x;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (x = sizeof(n) * 8 - 1; x >= 0; x--)
	{
		if ((n >> x) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
}
