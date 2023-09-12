#include "main.h"

/**
 * times_table -function that prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int m, x;

	for (x = 0 ; x < 10 ; x++)
	{
		_putchar('0');
		for (m = 1 ; m < 10 ; m++)
		{
			int sum = m * x;

			_putchar(',');
			if (sum / 100 == 0)
			{
				_putchar(32);
			}
			if (sum / 10 == 0)
			{
				_putchar(32);
			}
			else
			{
				_putchar('0' + (sum / 10));
			}
			if (sum % 10 == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar('0' + (sum % 10));
			}
		}
		_putchar('\n');
	}
}

