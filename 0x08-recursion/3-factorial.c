#include "main.h"
/**
 * factorail - Returns the factorial of a n.
 * @n: The number to return th factorail from .
 *
 * Return: The factorial of the n.
 */
int factorial(int n)
{
        int f;

        if (n < 0)
         {
                
               return (-1);
        }
	
	if( n == 0)
	{
		return (1);
	}
	else 
	{

        f = n* factorial(n-1);
    
	return(f);
	}	
}

