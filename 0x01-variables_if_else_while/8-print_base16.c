#include <stdio.h>
/**
* main - Entry point
* Description: 'program that prints all the numbers of base 16 in lowercase'
*Return: Always 0 (Success)
*/
int main(void)
{
char i;
putchar("\n\nLowercase Base 16:\n");
for(i='a'; i<='z'; i++)
putchar("%c ",i);
return 0;
}
