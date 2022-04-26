#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *  _strspn - function that gets the length of a prefix substring
 *  @s: This is the main string to be scanned
 *  @accept: This is the string containing the list of characters to match in s
 *  Return: number of bytes of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
