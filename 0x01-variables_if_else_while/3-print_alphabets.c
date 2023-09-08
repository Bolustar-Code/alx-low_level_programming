#include <stdio.h>

/**
 * main - Entry point
 * Write a program that prints the alphabet in lowercase and uppercase
 *
 * Return: each time 0
 */

int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a' ; lowercase <= 'z' ; lowercase++)
	{
		putchar(lowercase);

	}

	for (uppercase = 'A' ; uppercase <= 'Z' ; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}

