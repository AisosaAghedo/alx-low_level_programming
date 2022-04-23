#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * *string_toupper - function that changes all lowercase letters to uppercase
 * @str: the string
 * Return: Always 0
 */
char *string_toupper(char *arr)
{
	int i;
	int len;
	char str[1000];

	len =  (int)strlen(arr);

	for (i = 0; i <= len; i++)
	{
	      str[i] = toupper(arr[i]);
	}
	strcpy(arr, str);
	return (arr);

}
