#include "main.h"
#include <stdio.h>

/**
 * *_strcat - apend strings
 * Return: dest
 * Description:
 * @dest: destination
 * @src: source
 * */

char *_strcat(char *dest, char *src)
{
    while (*dest != '\0')
    {       
    dest++;
    }

    while (*src != '\0')
    {
    *dest = *src;
    dest++;
    src++;
    }
    
    return (dest);
}