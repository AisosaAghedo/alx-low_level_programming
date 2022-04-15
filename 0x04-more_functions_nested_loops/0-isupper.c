#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * isupper - Entry point
 * @c: stores the integer
 * Return: 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
