#include <stdio.h>

/**
 * main - Entry point
 *
 *Purpose- a program that prints the alphabet in lowercase less q&e
 * Return: each time 0
 */

int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		if ((letter == 'q' || letter == 'e') != 1)
		{
			putchar(letter);
		}

	}
	putchar('\n');
	return (0);
}
