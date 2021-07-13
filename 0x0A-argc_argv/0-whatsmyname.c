#include <stdio.h>

/**
 * main - prints program name followed by new line
 * @argc : number of program parameters
 * @argv : array of pointers to string pointers of size argc
 * Return : 0
 */

int main(int argc,  char const *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
