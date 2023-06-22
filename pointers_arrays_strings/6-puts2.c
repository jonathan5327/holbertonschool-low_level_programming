#include "main.h"
/**
 * puts2 - Write a function that prints every other character of a string, star
 * ting with the first character, followed by a new line.
 *
 *
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		if (*str == '\0')
			break;
		str++;
	}
	_putchar('\n');
}
