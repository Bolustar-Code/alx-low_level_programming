#include <stdio.h>

/**
 * A program that prints the lowercase alphabet in reverse, followed by a new line
 * main: the starting point
 * Return 0 each time
 */
			
			
int main(void) 
{
    char letter;

    for (letter = 'z'; letter >= 'a'; letter--) 
    {
        putchar(letter);
    }

    putchar('\n');

    return 0;
}
