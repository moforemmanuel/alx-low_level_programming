#include "holberton.h"
/**
 * _abs - computes absolute value of an integer
 * int: integer to be tested
 * Return: abs
 */
int _abs(int n)
{
int abs;
if (n > 0)
{
	abs = n;
}
else if (n == 0)
{
	abs = 0;
}
else
{
	abs = n*-1;
}
return (abs);
}
