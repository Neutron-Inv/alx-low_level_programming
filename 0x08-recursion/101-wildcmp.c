#include "main.h"
#include <stdio.h>

/**
 * wildcmp - check the code for Holberton School students.
 * @s1: string
 * @s2: string
 * Return: Always 0.
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == *s2 && *s1 && *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (!*s1 && !*s2)
return (1);
if (*s2 == '*')
{
if (*(s2 + 1) != *s1 && *(s2 + 1) != '*')
{
return (wildcmp(s1 + 1, s2));
}
else if (*(s2 + 1) != *s1 && *(s2 + 1) == '*')
{
return (wildcmp(s1, s2 + 1));
}
if (!wildcmp(s1, s2 + 1))
return (wildcmp(s1 + 1, s2));
if (wildcmp(s1, s2 + 1))
return (1);
}
return (0);
}