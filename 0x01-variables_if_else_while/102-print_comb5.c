#include <stdio.h>

/**
 * main - Entry point
 * Purpose- all possible combinations of two two-digit numbers
 * Return: Always 0 (Succes)
 */
int main(void)
{
	for (int x = 0; x <= 99; x++)
	{
		for (int y = x; y <= 99; y++)
		{
			int x_tens = x / 10;
			int x_ones = x % 10;
			int y_tens = y / 10;
			int y_ones = y % 10;
			putchar(x_tens + '0');
			putchar(x_ones + '0');
			putchar(' ');
			putchar(y_tens + '0');
			putchar(y_ones + '0');
			if (x != 99 || y != 99) 
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
