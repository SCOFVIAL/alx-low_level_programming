#include <stdio.h>

/**
 * main - Entry point
 *
 *Description:Prints all numbers of base16 in lowercase,followed by anewline
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
char letter;

for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');

return (0);
}
