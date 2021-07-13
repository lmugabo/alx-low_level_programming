#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
char *my_array;
int index, len = 0;
if (str == NULL)
return (NULL);
for (index = 0; str[index]; index++)
len++;
my_array = malloc(sizeof(char) * (len + 1));
if (my_array == NULL)
return (NULL);
for (index = 0; str[index]; index++)
my_array[index] = str[index];
my_array[len] = '\0';
return (my_array);
}
