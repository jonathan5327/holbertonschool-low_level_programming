#include "main.h"
/**
 * puts_half - Write a function that prints half of a string, followed by a new
 * line.
 * @str: string
 */
void puts_half(char *str)
{
	int n = strlen(str);
	int r;
	for (r = len / 2; r < len; r++)
	{
		printf("%d", r);
	}
	printf("\n");
}
