#include "main.h"
/**
 *print_sign-prints - prints Write a function that prints the sign
 *of a number.
 *@n: character to be verified
 *Return: returns 0 or 1
 */
int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}
