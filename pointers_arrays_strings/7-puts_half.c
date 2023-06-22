#include<stdio.h>
#include<string.h>
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

	for (r = (len + 1) / 2; r < n; r++)
	{
		_putchar(str[r]);
	}
	_putchar("\n");
}
