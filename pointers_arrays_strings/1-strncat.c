#include "main.h"
#include <string.h>
/**
 *_strncat - concatenate two strings but add inputted number of bytes
 *@dest: string to be appended upon
 *@src: string to be completed at end of dest
 *@n:integer parameter to compare index to
 *Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0, j = 0;

	while (j[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];

	return (dest);

}
