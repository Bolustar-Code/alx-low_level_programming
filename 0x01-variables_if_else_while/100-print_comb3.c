#include <stdio.h>

/**
 * main - Entry point
 * Purpose- prints all possible different combinations of two digits
 * Return: each time 0
 */

int main(void)
{
	int x;
	int y = 0;

	for (x = 0 ; x < 100 ; x++)
	{
		putchar(x / 10 + '0');
		putchar(y + '0');
		if (x < 99)
		{
			putchar(',');
			putchar(32);
		}
		y++;
		if (y > 9)
		{
			y = 0;
		}
	}
	putchar('\n');
	return (0);
}
