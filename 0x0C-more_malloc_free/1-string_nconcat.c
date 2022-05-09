#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	int l;
	int b;
	int k = 0;
	size_t str1 = strlen(s1), str2 = strlen(s2);

	l = str1 + str2 + 1;
	p = (char *) malloc(l);

	if (p == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= str2)
	{
		strcpy(p, s1);
		strcpy(p + str1, s2);
	}
	else if (n < str2)
	{
		for (b = str1; b <= ((int)n + (int)str1); b++)
		{
			p[b] = s2[k];
			k++;
		}

	}
	return (p);
}


