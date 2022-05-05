#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat -  function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: value
 */

char *str_concat(char *s1, char *s2)
{
	char *r;

	size_t str1 = strlen(s1), str2 = strlen(s2), d = str1 + str2 + 1;

	r = malloc(d);
	if (r == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = " ";
	}
	else if (s2 == NULL)
	{
		s2 = " ";
	}
	else if (s1 == NULL && s2 == NULL)
	{
		return (" ");
	}
	else
	{
		strcpy(r, s1);
		strcpy(r + str1, s2);
	}
	return (r);
}
