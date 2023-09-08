#include <stdio.h>

/**
 * Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * main -the starting  point
 * Return 0 each time
 */

int main(void) 
{
    int n = 0;

    while (n <= 9) 
    {
	    printf("%d", n);
        n++;
    }

    putchar('\n');

    return 0;
}
