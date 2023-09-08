#include <stdio.h>

/**
 * main - Entry point
 * Purpose-a program that prints all single digitnum base 10 from 0
 * Return: each time 0
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}

