#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long a = 1, b = 2, next;
unsigned long a_high, a_low, b_high, b_low, next_high, next_low;
int count;

printf("%lu, %lu", a, b);

for (count = 2; count < 92; count++)
{
next = a + b;
printf(", %lu", next);
a = b;
b = next;
}

a_high = a / 1000000000;
a_low = a % 1000000000;
b_high = b / 1000000000;
b_low = b % 1000000000;

for (; count < 98; count++)
{
next_high = a_high + b_high;
next_low = a_low + b_low;
if (next_low >= 1000000000)
{
next_high += 1;
next_low -= 1000000000;
}
printf(", %lu%09lu", next_high, next_low);
a_high = b_high;
a_low = b_low;
b_high = next_high;
b_low = next_low;
}

printf("\n");
return (0);
}
