#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: always return 0
*/
int main(void)
{
int n;
int lastd;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;
if (lastd > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, lastd);
}
else if (lastd == 0)
{
printf("last digit of %d is %d and is greater than 5\n", n, lastd);
}
else
{
printf("last digit of %d is %d and is less 6 and not 0\n", n, lastd);
}
return(0)
}
