#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints random number
 * whether is greater than 5 less than 6 or 0
 *
 * Return: Always0 (Success)
 */
int main(void)
{
	int n=0;

	srand(time(0));
	n=rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and  is greater tha 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) !=0)
	{
               printf("Last digit of %d is %d and  is less than 6 and not zero\n", n, n % 10);
	
	}
	else
	{
		printf("Last digit of %d is % and is 0\n", n, n % 10);
	
	}
	return (0);
}


