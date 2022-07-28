#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the contents of s1, followed by the contents of s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *cstr;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	cstr = malloc(sizeof(char) * (i + j + 2));

	if (cstr == NULL)
	{
		return (" ");
	}
	else
	{
		s2[j] = '\0';
		s1[i] = s2[j];
		cstr = s1[i];
		return (cstr);
	}
}
