

/*

 * File: 100-print_comb3.c

 * Auth: Brennan D Baraban

 */



#include <stdio.h>



/**

 * main - Prints all possible combinations of two different digits,

 *        in ascending order, separated by a comma followed by a space.

 *

 * Return: Always 0.

 */

int main(void)
  
{
  
  int first, second;
  

  
  for (first = 0; first < 9; first++)
    
    {
      
      for (second = first + 1; second < 10; second++)
	
	{
	  
	  putchar((first % 10) + '0');
	  
	  putchar((second % 10) + '0');
	  

	  
	  if (first == 8 && second == 9)
	    
	    continue;
	  

	  
	  putchar(',');
	  
	  putchar(' ');
	  
	}
      
    }
  

  
  putchar('\n');
  

  
  return (0);
  
}
