#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of a char: %id byte(s)\n", sizeof(char));
printf("Size of an int: %id byte(s)\n", sizeof(int));
printf("Size of a long int: %id byte(s)\n", sizeof(long int));
printf("Size of a long long int: %id byte(s)\n", sizeof(long long int));
printf("Size of a float: %id byte(s)\n", sizeof(float));
return (0);
}
