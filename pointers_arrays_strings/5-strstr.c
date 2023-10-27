#include "main.h"

/**
 * _strstr - locate a substring
 * Return: pointer
 * Description:
 * @haystack: str
 * @needle: str
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haytack != '\0')
	{
		if (*haystack == '\0' || *needle == '\0')
		{
		haystack--;
		needle--;
		break;
		}
		if (*needle == *haystack)
		{
		return (needle);
		}

	needle++;
	haystack++;
	}
	return ('\0');
}
