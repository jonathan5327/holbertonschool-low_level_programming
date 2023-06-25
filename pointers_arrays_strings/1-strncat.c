#include "main.h"
#include <string.h>
/***
 *_strncat - concatenates two strings but add inputted number of bytes
 *@dest: string
 *@src: string
 *@n: character
 *Return: Returns new concatenated stringi
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[j++] = src[i];
	}
		return (dest);
}
