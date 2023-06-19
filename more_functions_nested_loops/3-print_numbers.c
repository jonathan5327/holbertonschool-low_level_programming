#include "main.h"
#include <stdio.h>
/**
 *print_numbers - Write a function that prints the numbers, fr
 *om 0 to 9, followed by a new line.
 *Return: returns nothing
 */
void print_numbers(void)
{
int number = 48;
for (number = 48; number < 58; number++)
{
putchar(number);
}
putchar(10);
}
