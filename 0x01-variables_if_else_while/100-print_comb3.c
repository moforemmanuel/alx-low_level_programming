#include <stdio.h>
#include <stdlib.h>
/**
* main - main block
*Description: Two digit combo
*Return: 0
*/

int main(void){
int i,j;

for (i = 0; i < 10; i++)
{
	for (j = i+1; j < 10;j++)
	{
		putchar(48+i);
		putchar(48+j);
		if (i == 8 && j == 9)
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
putchar('\n');
return 0;
}
