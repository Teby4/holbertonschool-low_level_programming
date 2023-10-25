#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * Return: string capitalized
 * Description:
 * @p: string
 */

char *cap_string(char *p)
{
	char *j = p;

	if (*p >= 'a' && *p <= 'z')
        {
       *p = *p -32;
	}
	while (*p != '\0')
	{
		if (*p == ' ' || *p == ',' || *p == ';' || *p == '.' || *p == '!' || 
		*p == '?' || *p == '"' || *p == '(' || *p == ')' || *p == '{' || *p == '}' || *p == '	' || *p '\n')
		{
		p++;
			while (*p == ' ' || *p == ',' || *p == ';' || *p == '.' || *p == '!' || 
				*p == '?' || *p == '"' || *p == '(' || *p == ')' || *p == '{' || *p == '}' || *p == '	' || *p '\n')
			{
			p++;
			}

		        if (*p >= 'a' && *p <= 'z')
                        {
                        *p = *p -32;
                        }
		}
	
	p++;
	}
       	p = j;
	return (p);
}
