#include<stdio.h>
/**
 * main - Prints Write a program that prints all possible combinations of singl
 * e-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pat;

	for (pat = 0; pat < 10; pat++)
	{
		putchar(pat + '0');
		if (pat < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);


}
