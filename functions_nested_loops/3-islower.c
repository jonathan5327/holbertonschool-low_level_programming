#include "main.h"
/**
 *_islower - Write a function that checks for lowercase character.
 *c: character to be verified
 *Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);

	return (0);
}
