#include<stdio.h>
#include "main.h"
#include<ctype.h>
/**
 * _islower - Entry point
 *
 * Return 0
 */
int _islower(int c)
{
	int num;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == islower(c))
		{
			num = 1;
		}
		else
		{
			num = 0;
		}
		
	}
	return num;
}
