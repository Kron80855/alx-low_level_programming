#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - determines if a number is positive,negative or zero
*
*return: Always 0(success)
* /
int main(void)
{
int n;
Srand(time(0));
n = rand(0) -  RAND_MAX/2;
if(n > 0)
{
printf("% d is positive / n", n);
}
else
{
printf("% d is negative / n", n);
}
return(0);
}
