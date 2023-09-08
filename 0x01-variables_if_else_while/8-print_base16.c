#include <stdio.h>

/**
 * A program that prints all the numbers of base 16 in lowercase, followed by a new line
 * main: the starting point
 * Return 0 each time
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 16 ; x++)
	{
		if (x < 10)
		{
			putchar('0' + x);
		}
/*This if condition checks if n is less than 10, meaning it's one of the digits '0' through '9 then add */
		else
		{
			putchar(87 +x);
		}
/*In this case, it adds n to the value 87 (which corresponds to the ASCII value of 'a') to get the corresponding lowercase hexadecimal character and prints it */
	}
	putchar('\n');
	return (0);
}
