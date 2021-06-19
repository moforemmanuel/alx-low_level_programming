#include <stdio.h>
#include <stdlib.h>
/**
*main - main block
*Description: return alphabets
*return: 0
*/

int main(void)
{
int i;
char list[26] = "abcdefghijklmnopqrstuvwxyz";

for (i = 0; i < 26; i++)
  putchar(list[i]);
 putchar("\n");
return (0);
}
