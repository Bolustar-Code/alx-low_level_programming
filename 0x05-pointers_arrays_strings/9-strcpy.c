#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: destination buffer where the string will be copied to
 * @src: source string to be copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
