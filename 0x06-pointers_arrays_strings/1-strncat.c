#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n:  bytes from src
 * Return: Alway 0
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

