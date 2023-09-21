#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *s)
{
	int x;
	int y;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == data1[y])
			{
				s[x] = datarot[y];
				break;
			}
		}
	}
	return (s);
}
