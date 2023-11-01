#include <stdio.h>

/**
 * main - print argument
 * @argc: size of arqument
 * @argv: array
 *
 *
 *
 */

int main(int argc, char *argv[])
{
  int i;

  for (i = 0; i < argc; i++)
    {
      printf("%s\n", argv[i]);
    }
  return (0);
}
