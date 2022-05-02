#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argv:argument vector
 * @argc: number of arguments
 * @x: first integer
 * @y: second integer
 * @z: result of multiplication
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = atoi(argv[(x * y)]);
	if (argc == 3)
	{
		printf("%d\n",z);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
