#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - function that copies a string
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
