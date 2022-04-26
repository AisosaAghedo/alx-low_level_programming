#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strpbrk -  function that searches a string for any of a set of bytes
 * @s: This is the string to be scanned
 * @accept: This is the string containing the characters to match
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
