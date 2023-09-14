
#include <stdio.h>

/**
 * main - prints largest prime factor of the number 612852475143.
 * Return: Always 0.
 */

int main(void)
{
	long int x, pf;

	x = 612852475143;
	for (pf = 2; pf <= x; pf++)
	{
		if (x % pf == 0)
		{
			x /= pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}

