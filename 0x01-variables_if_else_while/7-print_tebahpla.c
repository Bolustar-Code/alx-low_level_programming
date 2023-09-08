#include <stdio.h>

/**
 * main - Entry point
 * Purpose-a program that prints the lowercase alphabet in reverse
 *
 * Return:each time 0
 */

int main(void)
{
	char letter;

	for (letter = 'z' ; letter >= 'a' ; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
