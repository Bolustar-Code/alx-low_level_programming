#include <stdio.h>

/**
 * main - Entry point
 *Purpose- program that prints all the numbers of base 16 in lc
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 16 ; x++)
	{
		if (x < 10)
		{
			putchar('0' + x);
		}
		else
		{
			putchar(87 + x);
		}
	}
	putchar('\n');
	return (0);
}
