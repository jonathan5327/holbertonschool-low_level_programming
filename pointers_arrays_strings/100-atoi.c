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

	num = atoi(s);

	for (nb = 0; nb < num; nb++)
	{
		_putchar(nb);
		s++;
	}
	_putchar('\n');

return (0);
}
