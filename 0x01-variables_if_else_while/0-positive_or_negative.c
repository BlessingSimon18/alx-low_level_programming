#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - prints if the number is positive, zero, or negative
 *
 * Return: Always (Success)
 */

int main(void)
{
	int n;	

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%l is positive\n", n);
	}
	else if (n == 0)
	{                                                                                       printf("%l is zero\n", n);                                              
	}
	else if (n < 0)                                                                 {	
		printf("%l is negative\n", n);                                    	}

	return (0);
}
