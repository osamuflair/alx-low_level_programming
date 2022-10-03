#include <stdio.h>
#include "main.h"

/**
 * _isupper - function to check for uppercase character
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
