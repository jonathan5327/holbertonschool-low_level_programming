#include "main.h"
/**
 * _strcat - Write a function that concatenates two strings.
 * @i: character
 * @j: character
 */
char *_strcat(char *dest, char *src)

{
	int i=0, j=0;

		while (dest[i] != '\0')
		{
			i++;
		}
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest != '\0';

		return dest;

}
	
