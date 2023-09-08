#include <stdio.h>

/**
 * Purpose: A program that prints the alphabet in lowercase, 
 * followed by a new line
 * main - Entry point
 * Return each time 0
 */

int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

