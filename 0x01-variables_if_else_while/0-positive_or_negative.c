#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'assign a random number to the variable'
 *
 * Return Always 0 (success)
 */

int main() 
{
double num;
printf("n");
scanf("%lf", &num);
if (num <= 0.0) {
if (num == 0.0)
printf("is zero");
else
printf("is negative");
} 
else
printf("is positive");
return (0);
}
