#include "holberton.h"
/**
 * print_last_digit - function that computes the absolute value of an integer
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_last_digit(int c)
{
if (c > 0 || c == 0)
{
c %= 10;
if (c < 0)
c = -c;
_putchar(c + '0');
return (c);
}
