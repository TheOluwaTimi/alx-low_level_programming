#include "main.h"
#include "stdio.h"
#include <stddef>

/**
 * memset - fill a block of memory
 * @s: starting address
 * @b: value
 * @n: no of value
 * Return: Always
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (i = n; i > 0; (i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
