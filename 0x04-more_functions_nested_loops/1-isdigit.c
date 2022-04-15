#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - Function to check for digits
 * @c: variable to hold a character
 * Return: 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
