#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits.
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
