#include <stdio.h>
#include <unistd.h>

/**
 * main - The begining function
 *
 * Return: Always 1 (if good)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

