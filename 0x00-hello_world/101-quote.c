#include <stdio.h>
#include <stdlib.h>

/**
 * main - print quote
 *
 * Description: print Dora's quote
 *
 * Return: Always 1 (success)
 */
int main(void)
{
write(STDOUT_FILENO, "and that piece of art is useful\" -Dora Korpa, 2015-10-19\n", 59);
return (1);
}
