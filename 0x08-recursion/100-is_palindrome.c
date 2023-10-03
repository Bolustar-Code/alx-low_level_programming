#include <stdio.h>

int find_paldrone(char *s, int result1, int result2);
int count_string(char *s);
/**
 * is_palindrome - checks if string is a palindrom
 * @s: string to check.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int count;

	count = 0;
	if (!(*s))
		return (1);

	count = count_string(s);
	return (find_paldrone(s, 0, count - 1));
}

/**
 * find_paldrone - helper for is_palindrom
 * @s: string to check
 * @result1: front index.
 * @result2: back index.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int find_paldrone(char *s, int result1, int result2)
{
	/*printf("%c - %c : %d - %d\n", s[result1], s[result2], result1, result2); */
	if (s[result1] != s[result2])
		return (0);
	if (s[result1] == s[result2] && result1 == result2)
		return (1);
	else if (s[result1] == s[result2] && result1 > result2)
		return (1);
	else
		return (find_paldrone(s, result1 + 1, result2 - 1));
}

/**
 * count_string - count the string.
 * @s: string to count.
 *
 * Return: Int value of the length.
 */
int count_string(char *s)
{
	if (*s)
		return (count_string((s + 1)) + 1);
	return (0);
}
