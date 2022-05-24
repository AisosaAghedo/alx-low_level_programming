#include <stdio.h>

/**
 * before_main - function executed before the main
 * function
 * Return: 0
 */
void __attribute__((constructor)) before_main()
{
	 printf("You're beat! and yet, you must allow,\nI bore my house");
	  printf(" upon my back!\n");
}



