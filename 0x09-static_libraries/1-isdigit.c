#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: the int that is used as the arguement of the function
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
