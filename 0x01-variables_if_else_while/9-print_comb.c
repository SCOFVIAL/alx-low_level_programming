#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * Numbers must be separated by ", ", followed by a space
 * Numbers should be printed in ascending order
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
putchar(num + '0');
if (num != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
