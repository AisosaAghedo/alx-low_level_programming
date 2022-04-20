#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 -  function that prints every other character of a string
 * @str: contains the string
 * Return: 0
 */
void puts2(char *str)
{
	int a;
	int b;

	a = strlen(str) - 1;
	for (b = 0; b <= a; b++)
	{
		if (b % 2 == 0)
		{
			printf("%c", str[b]);
		}
		else
		{
			continue;
		}
	}
	printf('\n');
}
