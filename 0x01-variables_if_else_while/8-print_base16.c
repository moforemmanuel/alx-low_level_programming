#include <stdio.h>
#include <stdlib.h>
/**
 *main - main block
 *Description: return upper and lowercase letters
 *Return: 0
 */

int main(void)
{
int i;

for (i = 48; i < 58; i++)
	putchar(i);
for (i = 97; i < 103; i++)
	putchar(i);
putchar('\n');
return (0);
}
