#include<stdio.h>

/**
 *main - Prints Write a program that prints the alphabet in
 * lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char alphabet = 'a';
do {
	putchar(alphabet);
	alphabet++;
	} while (alphabet <= 'z');
	putchar ('\n');
	return (0);
}
