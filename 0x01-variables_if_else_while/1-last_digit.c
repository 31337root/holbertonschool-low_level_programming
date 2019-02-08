#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int num;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;
	if (num > 5)
	{
	printf("The las digit of %d and is greater than 5\n", n);
	}
	else
	{
		if (num < 6 && n != 0)
		{
		printf("The las digit of %d and is less than 6 and not 0\n", n);
		}
		else
		{
		printf("The las digit of %d and is 0\n", n);
		}
	}
	return (0);
}
