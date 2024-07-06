#include "main.h"

/**
 * reverse_array - A function that reverse an array.
 * @a: an input array a
 * @n: number of elements in array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int swp;

	while (i < n--)
	{
		swp = a[i];
		a[i++] = a[n];
		a[n] = swp;
	}
}
