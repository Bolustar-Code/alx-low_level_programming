#include <stdio.h>

/**
 * Purpose: A program that prints the alphabet in lowercase, followed by a new line
 * main:The starting point of the program
 * Return (0) eachtime
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

