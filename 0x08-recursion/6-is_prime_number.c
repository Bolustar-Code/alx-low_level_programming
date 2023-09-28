#include <stdio.h>


int prime_number(int n, int i);

/**
 * is_prime_number - fuction the check if a number is a prime.
 * @n: number to be tested.
 *
 * Return: 1 if a Prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}

/**
 * prime_number - help fuction function for is_prime_number.
 * @n: Original number to be tested.
 * @x: Original number to test with.
 *
 * Return: 1 if a Prime else 0
 */
int prime_number(int n, int x)
{
	if (x == 1)
		return (1);
	else if (n % x == 0)
		return (0);
	else if (n % x != 0)
		return (prime_number(n, x - 1));
	return (0);
}
