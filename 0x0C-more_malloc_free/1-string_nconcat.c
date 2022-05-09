#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *  *string_nconcat - function that concatenates two strings
 *  @s1: first string
 *  @s2: second string
 *  @n: number of bytes
 *  Return: pointe
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int b, k = 0;
	int l = 0, str1 = strlen(s1), str2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l = (str1 + str2) + 1;
	p = (char *) malloc(sizeof(char) * l);
	if (p == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < str1; b++)
	{
		p[b] = s1[b];
	}
	if ((int)n < str2)
	{
		for (b = str1; b <= ((int)n + str1); b++)
		{
			p[b] = s2[k];
			k++;
		}
	}
	else
	{
		for (b = str1; b <= str2 + str1; b++)
		{
			p[b] = s2[k];
			k++;
		}
	}
	p[b - 1] = '\0';
	return (p);
}
