#include "main.h"
/**
 * print_alphabet - wirte the the lower-case alphabet on a line.
 *
 *
 * return (void)
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a' ; letters <= 'z' ; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}
