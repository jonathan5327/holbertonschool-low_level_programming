#include "main.h"
/**
 * swap_int - Write a function that swaps the values of two integers.
 * @b: character
 * @a: character
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *b;
	*a = *b;
	*b = temp;
}
