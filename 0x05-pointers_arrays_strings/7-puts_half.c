#include "main.h"
/**
 * puts_half - prints the second half of a string
 * followed by a new line
 * @str:  the input string
 * Return: half of input
 */
void puts_half(char *str)
{
	int index, i, length;

	length = 0;

	for (index = 0; str[index] != '\0'; index++)
		length++;

	i = (length / 2);

	if ((length % 2) == 1)
		i = ((length + 1) / 2);

	for (index = i; str[index] != '\0'; index++)
		_putchar(str[index]);
	_putchar('\n');
}
