#include "main.h"

/**
 * times_table -Entry point
 *
 * Return:Always 0
 */
void times_table(void)
{
	int x;
	int y;
	int z;
	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			c = a*b;
			if ((c / 10) == 0)
			{
				if (b == 0)
				{
					_putchar('0');
				}
				if (b != 0)
				{
					_putchar(' ');
					_putchar((c % 10) + '0');
				}
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}

