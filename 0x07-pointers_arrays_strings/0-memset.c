#include "main.h"

/**
 * _memset - this is a memory set function.
 * @s: A string
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * description _memset: over there
 * Return: A string
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
