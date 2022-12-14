#include "main.h"

/**
 * _memset - fill a block of memory
 * @s: starting address
 * @b: value
 * @n: no of value
 *
 * Return: Always
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
