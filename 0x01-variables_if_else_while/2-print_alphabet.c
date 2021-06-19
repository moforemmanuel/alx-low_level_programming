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
char list[26] = "abcdefghijklmnopqrstuvwxyx";

for (i=0; i<26; i++)
  putchar(list[i]);

return (0);
}
