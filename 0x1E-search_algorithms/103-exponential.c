#include "search_algos.h"

/**
* _binary_search :- it binary searches
* @array:first element of the array
* @left: left
* @right: right
* @value: The value
*
* Return: -1 or index
*/
int _binary_search(int *array, size_t left, size_t right, int value)
{
size_t i;

if (array == NULL)
return (-1);

while (right >= left)
{
printf("Searching in array: ");
for (i = left; i < right; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);

i = left + (right - left) / 2;
if (array[i] == value)
return (i);
if (array[i] > value)
right = i - 1;
else
left = i + 1;
}

return (-1);
}

/**
* exponential_search :-it  exponentially search
* @array:first element of the array
* @size: number of elements
* @value: The value
*
* Return: -1 or index
*/
int exponential_search(int *array, size_t size, int value)
{
size_t i = 0, right;

if (array == NULL)
return (-1);

if (array[0] != value)
{
for (i = 1; i < size && array[i] <= value; i = i * 2)
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
}

right = i < size ? i : size - 1;
printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
return (_binary_search(array, i / 2, right, value));
}
