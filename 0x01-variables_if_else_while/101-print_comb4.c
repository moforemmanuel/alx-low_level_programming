#include <stdio.h>
#include <stdlib.h>
/**
* main - main block
*Description: Two digit combo
*Return: 0
*/

int main(void)
{
int i, j, k;

for (i = 0; i < 10; i++)
{
	for (j = i + 1; j < 10; j++)
	{
		for (k = j + 1; k < 10; k++)
		{
			putchar(48 + i);
			putchar(48 + j);
			putchar(48 + k);
			if (i == 7 && j == 8 && k == 9)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
