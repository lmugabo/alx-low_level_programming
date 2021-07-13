#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - check the code for Holberton School students.
 * @str: argument for array
 * Return: Always 0.
 */
char *_strdup(char *str)
{
char *my_array;
int i, len;
my_array = malloc(sizeof(char)*(len+1));
i = len = 0;
if (str == NULL)
return (NULL);
for (index = 0; str[index]; index++)
len++;
if (my_array == NULL)
return (NULL);
for (index = 0; str[index]; index++)
my_array[i] = str[i];
my_array[i] = '\0';
return (my_array);
}
