#include <unistd.h>

/**
 * _putchar - writes te character to stdout
 * @c: the character
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
