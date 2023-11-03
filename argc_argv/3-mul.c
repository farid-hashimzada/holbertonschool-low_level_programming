#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two number
 * @argc: argument of size
 * @argv: argument of array
 * Return: Always 0
 *
 */

int main(int argc, char *argv[])
{
	int num_1, num_2, mull;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);
		mull = num_1 * num_2;
		printf("%d\n", mull);
	}
	return (0);
}
