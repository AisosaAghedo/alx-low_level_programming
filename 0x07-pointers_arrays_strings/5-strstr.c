#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *  *_strstr -  function that locates a substring
 *  @haystack: This is the main string to be scanned
 *  @needle: This is the small string to be searched with-in haystack string
 *  Return: pointer to the beginning of the located substring,NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
