#include "main.h"
/**
 * _strcpy - Write a function that copies the string pointed to by src, includi
 * ng the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer
 * @src: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i= 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	
	}

	return (dest);


}
