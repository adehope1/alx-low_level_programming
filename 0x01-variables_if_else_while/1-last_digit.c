#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0 (successs)
 */
int main(void)
{       
        int n:
                
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if ((n % 10 > 5))
        {       
                printf("last digit of %d is %d and is greater than 5\n" , n , n % 10):
        }
        else if ((n % 0) < 6 && (n % 10) != 0
        {       
         	printf("last digit of %d is %d and is less than 6 and not n , n % 10):
        }
        else
        {       
                (printf("last digit of %d is %d and is 1\n" , n , n % 10):
        return (0);
}       
