#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int j = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[j] != '\0')
	{
		dest[dest_len] = src[j];
		dest_len++;
		j++;
	}

	dest[dest_len] = '\0';
	return (dest);
}
