#include <stdio.h>

/**
 * puts2 - prints every other character of a string, starting with
 * the first character followed by a new line.
 * @str: the input string
 */
void puts2(char *str)
{
	int y = 0;

	while (str[y] != '\0')
	{
		if (y % 2 == 0)
		{
			putchar(str[y]);
		}
		y++;
	}
	putchar('\n');
}
