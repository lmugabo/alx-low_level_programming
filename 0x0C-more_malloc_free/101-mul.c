#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a given string
 *
 *
 * @s: string to check the length of
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
i++;
return (i);
}

/**
 * _atoi - Converts a character array to an integer
 *
 * Description: Respects leading '-' and '+' signs
 * integer inside string may be preceded by any number of non-integer values
 * but will only copy the first whole integer found.
 *
 * @s: character array to convert
 * Return: returns integer from array, returns 0 if none found
 */
int _atoi(char *s)
{
int retval, i, neg;

i = 0;
retval = 0;
neg = -1;
while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
neg *= -1;
i++;
}
while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
retval = (retval * 10) - (s[i++] - '0');
return (retval * neg);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

void errorexit(void)
{
int i;
char *error;

error = "Error";

for (i = 0; error[i] != '\0'; i++)
_putchar(error[i]);
_putchar('\n');
exit(98);
}

/**
 * main - multiplies two positive numbers
 *
 * @argc: number of arguments
 * @argv: array containing arguments
 * Return: returns zero, or exits with 98 if incorrect number of args
 */
int main(int argc, char *argv[])
{
int i, j, num1size, num2size;

(void) argv;
if (argc != 3)
{
errorexit();
}
for (j = 1; j <= 2; j++)
for (i = 0; argv[j][i] != '\0'; i++)
if (argv[j][i] < '0' || argv[j][i] > '9')
errorexit();
num1size = _strlen(argv[1]);
num2size = _strlen(argv[2]);
printf("n1: %d\nn2: %d\n", num1size, num2size);
return (0);
}
