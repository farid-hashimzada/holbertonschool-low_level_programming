#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizeString the string
 *@bush: parametr
 *
 * Return: Always 0.
 */

char *cap_string(char *bush)
{
	int i;

	for (i = 0; bush[i] != '\0'; i++)
	{
		if (i == 0 && bush[i] >= 97 && bush[i] <= 122)
			bush[i] = bush[i] - 32;
		if (bush[i + 1] >= 97 && bush[i + 1] <= 122)
		{
			if (bush[i] == 32 || bush[i] == 10 || bush[i] == 9)
				bush[i + 1] = bush[i + 1] - 32;
			else if (bush[i] == 44 || bush[i] == 59 || bush[i] == 46)
				bush[i + 1] = bush[i + 1] - 32;
			else if (bush[i] == 33 || bush[i] == 63 || bush[i] == 34)
				bush[i + 1] = bush[i + 1] - 32;
			else if (bush[i] == 40 || bush[i] == 41)
				bush[i + 1] = bush[i + 1] - 32;
			else if (bush[i] == 123 || bush[i] == 125)
				bush[i + 1] = bush[i + 1] - 32;
		}
	}

	return (bush);
}
