#include "main.h"
#include <stdio.h>

/**
 * print_thousand - print out the digit in the thousand spot
 * @sum: Value to scan for thousand spot
 *
 * Return: Void
 */
void print_times_table(int n);
static void print_thousand(int sum)
{
	if (sum / 1000 == 0)
	{
		putchar(32);
	}
	else
	{
		putchar('0' + (sum / 1000));
	}
}


/**
 * print_hundred - print out the digit in the hundred spot
 * @sum: Value to scan for hundred spot
 *
 * Return: Void
 */
static void print_hundred(int sum)
{
	if (sum / 100 == 0)
	{
		putchar(32);
	}
	else
	{
		putchar('0' + (sum / 100));
	}
}


/**
 * print_tenth - print out the digit in the tenth spot
 * @sum: Value to scan for tenth spot
 *
 * Return: Void
 */
static void print_tenth(int sum)
{
	if (sum / 10 == 0)
	{
		putchar(32);
	}
	else
	{
		if ((sum / 10) > 9)
		{
			putchar('0' + (sum / 10 % 10));
		}
		else
		{
			putchar('0' + (sum / 10));
		}
	}
}


/**
 * print_base10 - print out the digit in the base10 spot
 * @sum: Value to scan for base10 spot
 *
 * Return: Void
 */
static void print_base10(int sum)
{
	if (sum % 10 == 0)
	{
		putchar('0');
	}
	else
	{
		putchar('0' + (sum % 10));
	}
}

/**
 * print_times_table - print out the 9 times table
 * @n: Valuse use to generate times tables.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int v, h;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (h = 0 ; h <= n ; h++)
	{
		for (v = 0 ; v <= n ; v++)
		{
			int sum = v * h;

			if (v != 0)
			{
				putchar(',');
				putchar(' ');
			}
			print_thousand(sum);
			print_hundred(sum);
			print_tenth(sum);
			print_base10(sum);
		}
		putchar('\n');
	}
}
