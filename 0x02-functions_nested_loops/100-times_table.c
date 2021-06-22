#include "holberton.h"
/**
 * times_table - prints times table
 */
void print_times_table(int n)
{
	int i, j, prod;

	if(!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					_putchar(48);
					continue;
				}
				prod = i * j;
				_putchar(',');
				_putchar(' ');
				if (prod >= 10)
				{
					_putchar(prod / 10 + 48);
					_putchar(prod % 10 + 48);
				}
				else
				{
					_putchar(' ');
					_putchar(prod + 48);
				}
			}
		_putchar('\n');
		}
	}
}
