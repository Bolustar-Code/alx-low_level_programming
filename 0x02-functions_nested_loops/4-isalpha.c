#include "main.h"
/**
 * _isalpha - check if the given character is lower case.
 * @r: character to test within the ASCII rang (a-z) or (A-Z)
 *
 * Return: 1 (True) else 0 (False)
 */
int _isalpha(int r)
{
	if ((r >= 'a' && r <= 'z') || (r >= 'A' && r <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

