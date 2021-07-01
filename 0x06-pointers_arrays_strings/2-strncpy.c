#include "holberton.h"
/**
 * _strncpy - check the code for Holberton School students.
 * @src: parameter to a src to copy
 * @dest: parameter for dest
 * @n: parameter for number of bytes
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
int a = 0;
while (a < n && *(src + a))
{
*(dest+a) = *(src+a);
a++;
}
while (a < n)
{
*(dest + a) = '\0';
a++;
}
return (dest);
}
