#include "main.h"
/**
 *main - Prints Write a program that prints _putchar, followed by a new line.
 *Return: Always 0 (Success)
 * */
int main(void)
{
	char alphabet= 'a';

	while(alphabet <='z')
	{
		putchar(alphabet);
	alphabet++;
	}
	
	putchar('\n');
	return (0);
}
