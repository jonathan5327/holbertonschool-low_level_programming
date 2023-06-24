#include "main.h"
#include <string.h>
/***
 *
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] '\0' && j < n; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[i] = '\0'
		return (dest);
}
