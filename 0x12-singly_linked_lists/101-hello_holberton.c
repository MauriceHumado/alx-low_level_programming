#include <unistd.h>

#define STDOUT 1

/**
 * main - writes our character "Hello Holberton" to stdout
 * Return: on success 1 else -1
 *
 */

int main(void)
{
	return (write(STDOUT, "Hello Holberton\n", 16));
}
