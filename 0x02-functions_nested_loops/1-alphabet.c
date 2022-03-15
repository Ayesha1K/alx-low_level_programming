#include "holberton.h"

/**
 * print_alphabet - prints all aphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
