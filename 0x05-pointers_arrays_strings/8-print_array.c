#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * separated by comma and space followed by a new line.
 * @a: the array of integers
 * @n: the number of elements to print
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d, ", a[x]);
	}
		if (x == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
