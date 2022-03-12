#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* Betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
/*n is positive*/
printf("%d is positive\n", n);
else if (n == 0)
        /*n is zero*/
printf("%d is zero\n", n);
else
    /*n is negative*/
printf("%d is negative\n", n);
    /*The program terminate successfully*/
return (0);
}
