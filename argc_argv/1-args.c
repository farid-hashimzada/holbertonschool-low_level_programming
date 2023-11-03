#include <stdio.h>
/**
 * main - print the argument size
 * @argc: argument's size
 * @argv: argument
 * Return: Always 0;
 *
 *
 */

int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%d\n", argc - 1);
		(void)argv;
	}
	return (0);
}
