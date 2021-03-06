#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: size
 *
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
