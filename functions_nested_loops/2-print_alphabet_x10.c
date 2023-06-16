#include "main.h"
/**
 *print_alphabet_x10 - prints Write a function that prints 10 times the alphabe
 *t, in lowercase, followed by a new line.
 *Return: no return
 */
void print_alphabet_x10(void)
{
int num = 0;
int letter;
while (num++ <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar(10);
}
}
