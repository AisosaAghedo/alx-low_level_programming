#include "main.h"
#include <stdio.h>

/**
 * print_chessboard -  function that prints the chessboard
 * @a: first array
 * Return 0
 */
 void print_chessboard(char (*a)[8])
{
	int len;
	int i;
	int j;


	len = strlen(a) - 1;
	for (i =0; i <  len; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar((a[i][j]));
		}
	}
	return (0);
}


