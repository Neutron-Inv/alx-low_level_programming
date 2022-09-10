#include <stdio.h>

/**
 *main - prints hexadecimal base 0123456789abcdef, using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
int n = '0';
int remaining = 'a';

while (n <= '9') /*print 0-9*/
{
putchar(n);
n++;
}

while (remaining <= 'f') /*print a-f for the remaining*/
{     
putchar(a_to_f);
remaining++;
}
putchar('\n');
return (0);
}
