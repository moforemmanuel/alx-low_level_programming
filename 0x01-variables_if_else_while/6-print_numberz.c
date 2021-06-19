#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: print numbers
 *Return: 0
 */

int main(void)
{
char i;
for (i = '0'; i < "10"; i++)
	putchar("%c", i);
putchar('\n');
return (0);
}
