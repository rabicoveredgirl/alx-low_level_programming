#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/* to check if a given number is positive, zero or negative */

int main(void)

{
	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)

	{
		printf("%d is positive\n");

	}
	else if (n == 0)
	{
		printf("%d is zero\n");

	}
	else
	{
		printf("%d is negative\n");
	
	}

	return (0);

}


