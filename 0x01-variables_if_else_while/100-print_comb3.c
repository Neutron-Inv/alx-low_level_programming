#include <stdio.h>

/**
 *main - print all combinations of two units i.e 00-99
 *
 *return: Always 0 (Success)
 */

 int main(void)
 {
   int unit;
   int tenth;

   for (tenth = '0'; tenth <= 9; tenth++)
     {
       for (unit =(tenth + 1); unit <= 9; unit++)
	 {
	   putchar(tenth);
	   putchar(unit);

	   if (tenth != '8' || unit != '9')
	     {
	       putchar(',');
	       putchar(' ');
	     }
	 }
     }
   putchar('\n');

   return (0);
 }
