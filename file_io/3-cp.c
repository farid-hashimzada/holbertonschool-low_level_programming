#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#define BUFF 1024
/**
  * _cp -  copy file
  * @file_from: filename
  * @file_to: filename
  * Return: if error happen 97, 99, 100 else 0
  */
int _cp(const char *file_from, const char *file_to)
{
	int fdf, fdt, r = 1, w;
	char *content = malloc(BUFF);

	fdt = open(file_to, O_RDWR | O_TRUNC | O_CREAT, 0664);
	fdf = open(file_from, O_RDONLY);
	if (fdf == -1)
		dprintf(STDERR_FILENO, 
				"Error: Can't read from file %s\n", 
				file_from), exit(98);
	if (fdt == -1)
		dprintf(STDERR_FILENO, 
				"Error: Can't write to %s\n", 
				file_to), exit(99);
	while (r > 0)
	{
	    r = read(fdf, content, BUFF);
		if (r == -1)
			dprintf(STDERR_FILENO, 
					"Error: Can't read from file %s\n", 
					file_from), exit(98);
		w = write(fdt, content, r);
		if (w == -1)
			dprintf(STDERR_FILENO, 
					"Error: Can't write to %s\n", 
					file_to), exit(99);
	}
	if (close(fdf) == -1)
		dprintf(STDERR_FILENO, 
				"Error: Can't close fd %d\n", 
				fdf), exit(100);
	if (close(fdt) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdt), exit(100);
	return (1);
}

/**
  * main - main function
  * @argc - number of arguments
  * @argv - arguments
  */
int main(int argc, char **argv)
{
 	if (argc != 3)
 	{
 		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
 		exit(97);
 	}
	return (_cp(argv[1], argv[2]));
}
