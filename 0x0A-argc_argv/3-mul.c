#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argv:argument vector
 * @argc: number of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int result;

	result = 1;
	{
		if (argc == 3)
		{
			for (i = 1; i < argc; i++)
			{
				result *= atoi(argv[i]);
			}
			printf("%d\n", result);
		}
		else
		{
			puts("Error");
		}
	}
	return (0);
}
