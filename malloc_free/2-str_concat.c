#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *  -
 * Return:
 * Description:
 * @ :
 */

char *str_concat(char *s1, char *s2)
{
	char *j;
	unsigned int cont1, cont2;

	if (s1 == NULL)
	{
		return(NULL);
	}
	j = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (j == NULL)
	{
		return(NULL);
	}
	if (s1 != '\0'){
	for (cont1 = 0; cont1 < strlen(s1); cont1++)
	{
	j[cont1] = s1[cont1];
	}
	}
	if (s2 != '\0'){
	for (cont2 = 0; cont2 < strlen(s2); cont2++)
	{
	j[cont1] = s2[cont2];
	cont1++;
	}}
	j[cont1] = '\0';
	return (j);

}
