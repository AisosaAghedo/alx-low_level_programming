#include<stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int num;
	char ch;

	for (num = 1; num <= 10; num++)
	{
		for (ch = 'a';  ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
