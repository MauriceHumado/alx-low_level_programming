#include <stdio.h>
/**
 * main-program entry point.
 * return:0 Always (Success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
