#include <stdio.h>
/**
 * main - Prints Write a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Returns: Always 0 (Success)
 */
 int main(void)
{
	char min = 'a', may = 'A';

	for (; min <= 'z' ;)
	{
	putchar(min);
	min++;
	}

	do {
	putchar(may);
	may++;
	} while (may <= 'Z');

	putchar('\n');
	return (0);
}
