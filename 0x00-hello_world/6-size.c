#include <stdio.h>

/**
 * main - print the size of various type
 *
 *Description: ptint various typr of the computer
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
printf("size of a char: %d byte(s)\n", (int)sizeof(d));
printf("size of an int: %d byte(s)\n", (int)sizeof(a));
printf("size of a long int: %d byte(s)\n", (int)sizeof(b));
printf("size of a long long int: %d byte(s)\n", (int)sizeof(c));
printf("size of a float: %d byte(s)\n", (int)sizeof(f));
return (0);
}
