#include "main.h"
/**
 *print_diagonal - Write a function that draws a diagonal line on the terminal.
 *@n: character
 */

void print_diagonal(int n)
{
        int l = 0, s = 0;

        if (n > 0)
        {
                while (l < n)
                {
                        while (s < l)
                        {
                             	_putchar(' ');
                                s++;
                        }
                        l++;
                        s = 0;
                        _putchar('\\');
                        _putchar('\n');
                }
        }
        else
        {
                _putchar('\n');
        }

}
