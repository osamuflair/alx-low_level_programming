#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 * Return: 0
 */
void more_numbers(void)
{
	int c = 0, d;

	while (c < 10)
	{
		d = 0;
		while (j <= 14)
		{
			_putchar(d);
			d++;
		}
	_putchar('\n');
	c++;
	}
}



