#include "main.h"
/**
 *main - Prints_alphabet Write a program that prints _putchar, followed by a new line.
 *
 *Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
