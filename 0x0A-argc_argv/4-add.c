#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 * Return: 0 if digits passed else 1
 */

int main(int argc, char *argv[])
{
	int num, sum = 0;

	for (num = 1; num < argc; num++)
	{
		if (atoi(argv[num]) != 0)
		{
			sum += atoi(argv[num]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
