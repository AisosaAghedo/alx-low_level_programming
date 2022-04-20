#include "main.h"
#include <stdio.h>
/**
 * print_rev - function to reverse a string
 * @s: string to be reveresed
 * Return: 0
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (i = i - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
