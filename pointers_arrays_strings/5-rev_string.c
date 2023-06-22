#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *
 */
void rev_string(char *s)
{
	int tam = strlen(s);
	int i;
	char aux;

	for(i=0;i<tam/2;i++)
	{
	aux = s[i];
	s[i] = s[tam-1-i];
	s[tam-i-1] = aux;
	}
}

