#include "main.h"

/**
 * print_alphabet_x10 - write the the lower-case alphabet on a new line
 *
 */
void print_alphabet_x10(void)
{
	char letters;
	int x;

	for (x = 0; x < 10 ; x++)
	{
		for (letters = 'a' ; letters <= 'z' ; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');
	}
}

