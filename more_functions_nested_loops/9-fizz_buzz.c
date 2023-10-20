#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("FizzBuzz");
		}
	}
	return (0);
}
