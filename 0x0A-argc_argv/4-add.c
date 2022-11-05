#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the addition of positive numbers
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 * Return: 0 if digits passed else 1
 */

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0, argv[a][b]; b++)
		{
			if (isdigit(argv[a][b]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
