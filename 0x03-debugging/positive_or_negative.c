#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - prints if a number
 * is positive, negative, or zero
 * @i: the integer to be checked
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
}
