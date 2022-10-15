#include <stdio.h>

/**
 * main-program entry point.
 * return:0 Always (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;

		putchar(i);
	}
	putchar('\n');
	return (0);
}
