#include <stdio.h>
/**
 * main - Entry point
 * @argv: argument vector
 * @argc: argument number
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
