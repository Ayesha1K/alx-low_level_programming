#include <stdio.h>

/**
 * main - alphabet in lowercase, followed by a new line.
 *
 * Always return(0)
 */

void main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}

