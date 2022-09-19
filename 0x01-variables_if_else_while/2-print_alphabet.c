#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always success
 */
int main (void)

{
       	char zh = 'a';
	while (zh <= 'z')

    {
	    putchar(zh);
	    ++zh;
    }

    putchar('\n');
    return(0);
}
