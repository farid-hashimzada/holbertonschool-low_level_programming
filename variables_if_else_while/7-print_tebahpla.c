#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
char alf = 'z';
while (alf >= 'a')
{
	putchar(alf);
	alf--;
}
putchar('\n');
return (0);
}
