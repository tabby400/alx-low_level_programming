#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int i, int length);

/**
 * is_palindrome - function shows if a string is a palindrome
 *
 * @s: the string to be looked at
 *
 * Return: 1 if string is a palindrome and 0 otherwise
 */


int is_palindrome(char *s)
{
	/*an empty string is a palindrome so*/
	if (*s == 0)
	{
		return (1);
	}
	else
	{
		return (check_palindrome(s, 0, find_strlen(s)));
	}
}

/**
 * find_strlen - gets the length of the string
 *
 * @s: the string to find length of
 *
 * Return: string length
 */

int find_strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + find_strlen(s + 1));
}

/**
 * check_palindrome - looks out for palindrome using recursion
 * @s: string to look out for
 * @length: the length of string
 * @i: start of iteration
 *
 * Return: 1 if it is a palindrome, 0 otherwise
 */

int check_palindrome(char *s, int i, int length)
{
	/* to see if in reverse still same*/
	if (*(s + i) != *(s + length - 1))
	{
		return (0);
	}
	else if (i >= length)
	{
		return (1);
	}
	else
		return (check_palindrome(s, i + 1, length - 1));
}
