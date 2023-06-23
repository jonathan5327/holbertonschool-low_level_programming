#include "main.h"
/**
 * _strcat - Write a function that concatenates two strings.
 * @i: character
 * @j: character
 */
char *_strcat(char *dest, char *src)

{
	int i=0, j=0;

		while (dest[i++])
		{
			j++;
		}
		while (src[j++])
		{
			dest[i] = src[j];
			i++;
		}	
		return dest;

}
	
