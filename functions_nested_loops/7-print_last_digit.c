#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @r: number to be targeted
 * Return: returns 0
 */
int print_last_digit(int r)
{
int lastd = r % 10;
if (lastd < 0)
lastd *= -1;

_putchar (lastd + '0');
return (lastd);
}
