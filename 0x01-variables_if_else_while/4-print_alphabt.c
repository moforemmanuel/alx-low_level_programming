#include <stdio.h>
#include <stdlib.h>
/**
*main - main block
*Description: return alphabets
*Return: 0
*/

int main(void)
{
int i;
char list[27] = "abcdefghijklmnopqrstuvwxyz";

for (i = 0; i < 26; i++)
	putchar(list[i]);
	if (list[i] == 'q' || list[i] == 'e')
		continue;
putchar('\n');
return (0);
}
