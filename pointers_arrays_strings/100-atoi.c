#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 *
 *
 */
int _atoi(char *s)
{
        char nb;
        int num;

        nb = atoi(s);

        while (num >= nb)
        {
                _putchar(nb);
                num++;
        }
        _putchar('\n');

return (0);
}
