#include "main.h"
#include <stddef.h>
/**
 * _strstr - function finds the first occurence of a substring
 *
 * @haystack: the string where to look substring
 * @needle: the substring to look for
 *
 * Return: pointer to beginning of substring or NULL if not there
 */

char *_strstr(char *haystack, char *needle)
{
	int q = 0;

	/*check if *needle has anything*/

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		q = 0;

		if (needle[q] == haystack[q])
		{
			do {
				if (needle[q + 1] == '\0')
					return (haystack);
				q++;
			} while (haystack[q] == needle[q]);
		}
		haystack++;
	}
	return (NULL);

}
