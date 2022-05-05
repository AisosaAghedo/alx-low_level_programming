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

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		r = strcat(s1, s2);
	}
	return (r);
}
