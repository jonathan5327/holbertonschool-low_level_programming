#include <stdio.h>
/**
 *main - Prints Write a program that prints all the numbers of base 16 in lower
 *case, followed by a new line.
 *Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	int let = 'a';
	
	do {
		putchar(let);
		let++;
	} while (let <= 'f');

	putchar ('\n');

	return (0);

}
