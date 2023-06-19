#include "main.h"
/**
 *_isupper - Write a function that checks for uppercase character.
 *@c: tested character
 *Return: return 1 if it is uppercase, 0 if not
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);

return (0);
}
