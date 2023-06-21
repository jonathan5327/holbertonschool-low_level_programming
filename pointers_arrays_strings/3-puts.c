#include "main.h"
/**
 * _puts - Write a function that returns the length of a string.
 * @str: characters 
 *
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	 _putchar('\n');
}
