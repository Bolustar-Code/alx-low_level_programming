#include <stdio.h>

/**
 * main - Entry point
 * Purpose- all possible combinations of two two-digit numbers
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int x;
	int y;
	int x_tens;
	int x_ones;
	int y_tens;
	int y_ones;

	for (x = 0; x <= 99; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			x_tens = x / 10;
			x_ones = x % 10;
			y_tens = y / 10;
			y_ones = y % 10;
			putchar(x_tens + '0');
			putchar(x_ones + '0');
			putchar(' ');
			putchar(y_tens + '0');
			putchar(y_ones + '0');
			if (x != 99 || y != 88)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
