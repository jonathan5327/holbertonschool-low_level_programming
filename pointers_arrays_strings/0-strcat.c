#include "main.h"
/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: pointer
 * @src: pointer
 *
 * return: returns pointer to @dest
 */
char *_strcat(char *dest, char *src)

{
	int i = 0, j = 0;

		while (dest[i++])
		{
			j++;
		}
		for (i = 0; src[i]; i++)
			dest[j++] = src[i];


		return (dest);

}
