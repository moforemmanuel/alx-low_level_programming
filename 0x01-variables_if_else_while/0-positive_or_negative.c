#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - main block that compares two numbers
 *Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	  printf("%d is postive\n",n);
	else if (n == 0)
	  printf("%d is zero\n",n);
	else if (n < 0)
	  printf("%d is negative\n",n);
	
	return (0);
}
