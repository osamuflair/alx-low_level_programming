#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: the first function arguement
 * @src: the second function arguement
 * Return: 0 if sucessful
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
	{
	}
	for (j = 0; src[j] != '\0'; ++j)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
