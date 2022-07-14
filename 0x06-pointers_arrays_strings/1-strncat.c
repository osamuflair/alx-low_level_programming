#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: first arguement
 * @src: second arguement
 * @n: last arguement
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
