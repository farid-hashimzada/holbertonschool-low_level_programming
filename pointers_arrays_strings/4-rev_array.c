#include <stdio.h>
#include <string.h>
/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: array.
 * @n: number of characters.
 */
void reverse_array(int *a, int n)
{
        int i;
        int j = 0;
        int num[100];

        for (i = 0; i <= n; i++)
        {
                num[i] = a[i];
        }

        for (i = n - 1; i >= 0; i--)
        {
                a[j] = num[i];
                j++;
        }
}
