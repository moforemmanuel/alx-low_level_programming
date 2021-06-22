#include "holberton.h"

/**
 *print_alphabet_x10: print 10xthe alphabets
 *Return: 0
 */

void print_alphabet_x10(void)
{
  int i = 0;
 
  while (i < 10)
    {
      char c = 'a';
      while (c <= 'z')
	{
	  _putchar(c);
	  c++;
	    }
      _putchar('\n');
      i++;
    }
}
