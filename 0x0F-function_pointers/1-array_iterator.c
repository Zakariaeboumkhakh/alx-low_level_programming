#include "function_pointers.h"

/**
 * array_iterator - executes a given function on each element of an array.
 *
 * @array: pointer to the array to be processed.
 * @size: size of the array.
 * @action: pointer to the function to be called for each array element.
 *          The function takes an integer parameter and returns void.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    if (array && action)
    {
        i = 0;
        while (i < size)
        {
            action(array[i]);
            i++;
        }
    }
}
