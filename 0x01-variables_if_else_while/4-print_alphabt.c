#include <stdio.h>


/**
 * A program that prints the alphabet in lowercase, except q and e
 * main the stating point
 * Return 0 each time
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
