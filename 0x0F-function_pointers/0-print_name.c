#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
int i = 0;

while(name[i])
{
  _putchar(name[i]);
}
