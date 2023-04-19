#include "function_pointers.h"

/**
 * print_name - prints a given name using a provided function pointer.
 *
 * @name: pointer to the name string to be printed.
 * @f: function pointer to a function that takes a string parameter and returns void.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}
