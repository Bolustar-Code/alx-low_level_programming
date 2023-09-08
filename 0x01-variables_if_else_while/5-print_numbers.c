#include <stdio.h>

/**
 * main - Entry point
 * Purpose- program that prints all single digit numbers of base 10 from 0
 * Return: each time 0
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}
