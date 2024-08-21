#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms in the Fibonacci sequence
 *        whose values do not exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 1, b = 2, next;
int sum = 2;  /* Start with 2 because it's the first even term */

while (1)
{
next = a + b;
if (next > 4000000)
break;

if (next % 2 == 0)
sum += next;

a = b;
b = next;
}

printf("%d\n", sum);
return (0);
}
