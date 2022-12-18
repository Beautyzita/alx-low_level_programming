#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is to find multiples of 3 and 5 that are below 1024
 * Return: return the value of the integer
 */
int main(void)

{
int i;
int sum = 0;

for (i = 0; i <= 1024; i++)
{
if (i % 5 == 0)
{
printf("%d\n", i);
}
if (i % 3 == 0)
{
printf("%d\n", i);
}
{
sum = 0 + 1;
}
printf("%d\n", sum);
}
return (0);
}
