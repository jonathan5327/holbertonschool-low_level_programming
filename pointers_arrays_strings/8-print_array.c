#include "main.h"
#include<stdio.h>
/**
 * print_array - Write a function that prints n elements of an array of integer
 * s, followed by a new line.
 * @n: is the number of elements of the array to be printed
 * @a: array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");

}
