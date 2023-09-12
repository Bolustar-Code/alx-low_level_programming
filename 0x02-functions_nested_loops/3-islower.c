#include "main.h"
/**
 * _islower - check if the given character is lower case.
 * @r: character to check if within the ASCII range of lowercase letters.
 * Return: 1 (True) else 0 (False)
 */
int _islower(int r)
{
	if (r >= 'a' && r <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
