#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str:the bfunctions arguement
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[1] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar('\n');
		}

