#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * Return: string capitalized
 * Description:
 * @p: string
 */

char *cap_string(char *p)
{
	while(*p != '\0')
	{
		if (*p == 32)
		{
		p++;
		p = p + -32;
		}
	p++;
	}

 return (p);
}
