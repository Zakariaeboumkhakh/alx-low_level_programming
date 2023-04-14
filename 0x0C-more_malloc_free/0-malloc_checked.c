#include "main.h"

/**

*malloc_checked - Terminates process with status 98 if malloc fails.
*@b: Amount of memory to allocate.
*Return: Pointer to the allocated memory.
*/
void *malloc_checked(unsigned int c)
{
	void *ret;

	ret = malloc(c);
	if (ret == NULL)
		exit(98);
	return (ret);

}
