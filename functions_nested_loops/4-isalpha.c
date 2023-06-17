#include "main"
/**
 *_isalpha - Write a function that checks for alphabetic character.
 *@c: character to be verified
 *Return: 0 or 1
 */
int _isalpha(int c)
{
	if(c >= 'a' && <= 'z')
		return (1);

	return(0);

}
