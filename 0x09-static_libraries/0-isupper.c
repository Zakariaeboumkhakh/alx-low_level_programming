#include "main.h"

/**
 * _isupper  - checks for uppercase character
 * @r: The int of char to check
 * Return: 1 if the character is uppercase
 * or return 0 
 */
int _isupper(int r)
{
	if (r >= 'A' && r <= 'Z')
		return (1);
	else
		return (0);
}
