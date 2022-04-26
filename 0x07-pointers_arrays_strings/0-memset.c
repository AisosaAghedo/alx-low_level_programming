#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *  *_memset - function that fills memory with a constant byte
 *  @s: pointer to the block of memory to fill
 *  @b:  the value to be set
 *  @n: the number of bytes to be set to the value
 *  Return 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
