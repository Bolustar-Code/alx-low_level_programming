#include "main.h"
/**
 * _strncpy - Copies at most 'n' characters from 'src' to 'dest'.
 * @dest: The destination string.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to copy from 'src'.
 *
 * Return: A pointer to the resulting string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
