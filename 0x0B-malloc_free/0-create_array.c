/**
 * create_array - creates an array of characters, and initializes each element with a given value
 * @size: the size of the array to create
 * @c: the value to initialize each element of the array
 *
 * Return: a pointer to the newly created array, or NULL if the allocation fails
 */
char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    if (size == 0)
        return (NULL);

    /* Allocate memory for the array */
    array = (char *) malloc(sizeof(char) * size);
    if (array == NULL)
        return (NULL);

    /* Initialize each element of the array with the given value */
    for (i = 0; i < size; i++)
        array[i] = c;

    /* Return a pointer to the newly created array */
    return (array);
}
