#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_memcpy -  function that copies memory area
 * @dest: pointer to the destination array where the content is to be copied
 * @src:  pointer to the source of data to be copied
 * @n: This is the number of bytes to be copied
 * Return: This function returns a pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
