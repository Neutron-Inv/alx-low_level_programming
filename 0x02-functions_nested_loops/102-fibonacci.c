#include "main.h"

#include <stdio.h>

/**
 * main - fibbonacci
 * Return: 0
 */

int main(void)

{
long int a, b, c;
long int i;
int ;
a = 0;
b = 1;
c = 1;
end = 50;
for (i = 1; i <= end; i++)
{
printf("%li", c);
a = b;
b = c;
c = a + b;
if (i < 50)
printf(", ");
}
printf("\n");
return (0);
}
