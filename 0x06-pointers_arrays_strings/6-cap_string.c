#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int sign = 0;

	while (str[sign])
	{
		while (!(str[sign] >= 'a' && str[sign] <= 'z'))
			sign++;

		if (str[sign - 1] == ' ' ||
		    str[sign - 1] == '\t' ||
		    str[sign - 1] == '\n' ||
		    str[sign - 1] == ',' ||
		    str[sign - 1] == ';' ||
		    str[sign - 1] == '.' ||
		    str[sign - 1] == '!' ||
		    str[sign - 1] == '?' ||
		    str[sign - 1] == '"' ||
		    str[sign - 1] == '(' ||
		    str[sign - 1] == ')' ||
		    str[sign - 1] == '{' ||
		    str[sign - 1] == '}' ||
		    sign == 0)
			str[sign] -= 32;

		sign++;
	}

	return (str);
}
