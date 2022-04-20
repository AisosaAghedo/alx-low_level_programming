#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - function to print half of a string
 * @str: pointer to the string
 * Return: 0
 */
void puts_half(char *str)
{
	int n;
	int i;
	int j;
	int l;


	n = strlen((str) -1) / 2;
		j = strlen(str) /2;
		l = strlen(str);
		for (i = j; i < l; i++)
		{
			if (str[i] % 2 == 0)
			{
				printf("%c", str[i]);
			}
			else
			{
				printf("n");
			}
		}
		printf("\n");
}

