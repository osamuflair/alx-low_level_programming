#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the arguement of the function
 * Return: a pointer to a new string which is a duplicate of the string
 */
char *_strdup(char *str)
{
	char *dstr;
	unsigned i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	dstr = malloc(sizeof(str) * i + 1);

	if (dstr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i j++)
	{
		dstr[j] = str[j];
	}
	return (dstr);
}
