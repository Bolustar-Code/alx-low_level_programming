#include "main.h"
/**
 * main - Entry point
 * purpose- a program that prints _putchar
 * Return: each time 0
 */

int main(void)
{
	char *h = "_putchar\n";

	while (*h)
	{
		_putchar(*h);
		h++;
	}
	return (0);
}
