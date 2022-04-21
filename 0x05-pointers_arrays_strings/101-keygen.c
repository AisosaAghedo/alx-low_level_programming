#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 */
int main(void)
{
	int i;

	srand(time(0));
	i = rand();
	printf("%d\n", i);
	return (0);
}
