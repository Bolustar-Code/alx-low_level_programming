#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: The input string.
 *
 * Return: A pointer to the modified string 'str'.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
