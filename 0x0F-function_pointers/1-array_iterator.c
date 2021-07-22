#include "function_pointers.h"
/**
 * array_iterator - func that executes a func given as a parameter
 * @array: parameter for array
 * @size: parameter for size
 * @action: paramter for action
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array == NULL || action == NULL)
return;
while(i < size)
{
(*action)(*(array + i));
i++;
}
}
