#include "main.h"
/**
 *
 */
int print_last_digit(int r)
{
	int lastd = r % 10;
	if (lastd < 0)
	lastd *= -1;

	_putchar (lastd + '0');
	return (lastd);
}
