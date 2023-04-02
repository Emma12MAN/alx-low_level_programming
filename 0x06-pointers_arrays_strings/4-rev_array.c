#include "main.h"
/**
 * reverse_array - function that reverses
 * the content of an array of integers
 *@a: array argument
 *@n: number of elements of the array
 * Return: void .
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
	}
}
