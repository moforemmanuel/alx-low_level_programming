#include "holberton.h"
/**
 * print_sign - returns 1 if n  is greater than 0, 0 if n = 0, -1 otherwise
 * @n: integer to be tested
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
if (n > 0)
{
	return (1);
	_putchar('+');
}
else if (n == 0)
{
	return (0);
	_putchar('0');
}
else
{
	return (-1);
	_putchar('-');
}
}
