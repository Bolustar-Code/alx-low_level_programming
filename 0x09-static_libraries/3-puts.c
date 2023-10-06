#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: The string to be printed.
 *
 * Return: None (void).
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

/**
 * main - Entry point of the program.
 *
 * Return: Always returns 0 (Success).
 */
int main(void)
{
	_puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
