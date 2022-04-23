#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strcat - function that concatenates two strings
 * @*dest: first string
 * @*src: second string
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (_putchar(dest));
}
