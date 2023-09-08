#include <stdio.h>

/**
 * main - Entry point
 * Purpose-A program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Sucess)
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
