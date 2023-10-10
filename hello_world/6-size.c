#include <stdio.h>

int main(void)
{
	printf ("Size of a char:%d\n byte(s)", (int)sizeof(char));
	printf ("Size of an int:%d\n byte(s)", (int)sizeof(int));
	printf ("Size of a long int:%d\n byte(s)",(int)sizeof(long));
	printf ("Size of a long long int:%d\n byte(s)", (int)sizeof(long double));
	printf ("Size of a float:%d\n byte(s)", (int)sizeof(float));
	
	return (0);
}
