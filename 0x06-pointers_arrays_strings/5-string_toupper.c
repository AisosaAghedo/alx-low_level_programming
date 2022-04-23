#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * *string_toupper - function that changes all lowercase letters to uppercase
 * @str: the string
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	int i;
	char str[1000];
	int len;

	len = strlen(str);

	for (i = 0; i <= len; i++)
	{
		return (str[i] = toupper(str[i]));
	}

}
