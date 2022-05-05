#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup -function that returns a pointer to a ne space  in  memory
 * @str: string
 * Return: values
 */
char *_strdup(char *str)
{
	char r;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		r = strdup(str);
	}
	return (r);
}

