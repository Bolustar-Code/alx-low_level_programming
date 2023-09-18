#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int result, sign, n, length, f, digit;

	result = 0;
	sign = 0;
	n = 0;
	length = 0;
	f = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (result < length && f == 0)
	{
		if (s[result] == '-')
			++result;

		if (s[result] >= '0' && s[result] <= '9')
		{
			digit = s[result] - '0';
			if (sign % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[result + 1] < '0' || s[result + 1] > '9')
				break;
			f = 0;
		}
		result++;
	}

	if (f == 0)
		return (0);

	return (n);
}
