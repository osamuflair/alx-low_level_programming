#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of command line arguements
 * @argv: an array containing the command line arguement
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
