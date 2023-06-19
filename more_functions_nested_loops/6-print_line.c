#include<stdio.h>
#include "main.h"
/**
 * print_line - Write a function that draws a straight line in the terminal.
 *Return: Always 0
 */
void print_line(int n)
{
while (n-- > 0)
{
putchar('_');
}
putchar('\n');
}
