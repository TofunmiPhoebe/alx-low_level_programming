#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	while (i < n--)
	{
		j = a[i];
		a[i++] = a[n];
		a[n] = j;
	}
}
