#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - Check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: nothing;
 */

void main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = (num1) * (num2);
		printf("%d\n", result);
	}
}
