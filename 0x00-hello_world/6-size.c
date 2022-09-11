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
printf("size of a char: %d byte(s)\n", unsigned(char));
printf("size of an int: %d byte(s)\n", unsigned(int));
printf("size of a long int: %d byte(s)\n", unsigned(long int));
printf("size of a long long int: %d byte(s)\n", unsigned(long long int));
printf("size of a float: %d byte(s)\n", unsigned(float));
return (0);
}
