#include <stdio.h>



/**
 * print_number - print the given number.
 * @n: number to print.
 */
void print_number(int n)
{
	int collection = n;
	unsigned int num1;
	int count = 0;
	int print = 0;

	if (n < 0)
	{
		num1 = -n;
		_putchar('-');
	}
	else
	{
		num1 = n;
	}

	while (collection != 0)
	{
		collection /= 10;
		++count;
	}
	count -= 1;

	do {
		if ((num1 / (_pow(10, count)) > 9) && count > 1)
		{
			print = num1 / (_pow(10, count));
			print = print % 10;
			_putchar('0' + print);
		}
		else if (count > 1)
		{
			print = (num1 / _pow(10, count));
		       _putchar('0' + print);
		}
		else if (((num1 / 10) > 9) && count == 1)
		{
			print = (num1 / 10) % 10;
			_putchar('0' + print);
		}
		else if (count == 1)
		{
			print = num1 / 10;
			_putchar('0' + print);
		}
		else
		{
			print = num1 % 10;
			_putchar('0' + print);
		}
		count--;
	} while (count > -1);
}

/**
 * _pow - power fuction
 * @a: value to use.
 * @b: growth count
 *
 * Return: value int.
 */
int _pow(int a, int b)
{
	int i;
	int p = a;

	for (i = 1 ; i < b ; i++)
	{
		a *= p;
	}
	return (a);
}

