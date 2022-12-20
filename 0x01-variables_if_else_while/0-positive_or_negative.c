#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - void
*
*Return: 0;
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)/*this is 1 senario check if it is +ve*/
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)/*this is 2 one cheking if it is 0*/
	{
		printf("%d is zero\n", n);
	}
	else/*final cheke if it is not the above it will be -ve*/
		printf("%d is negative\n", n);
	return (0);
}
