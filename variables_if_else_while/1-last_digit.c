#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 *
 *
 */



int lastdigit = n % 10;
        return lastdigit;


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastdigit);
	}
	else if (lastdigit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastdigit);
	}
	else if (lastdigit = 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastdigit);
	}

	
	return (0);
}
