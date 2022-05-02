#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argv:argument vector
 * @argc: number of arguments
 * @result: result of multipliication
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int result;
	(void)argv;

	result = 1;
	for (i = 1; i < argc; i++)
	{
		if (argc == 3)
		{
			result *= atoi(argv[i]);
			printf("%d\n", result);
		}
		else
		{
			printf("Error\n");
		}
	}
	return (0);
}
