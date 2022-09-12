#include <stdio.h>
/**
* main - Entry point
* Description: 'program that prints all the numbers of base 16 in lowercase'
*Return: Always 0 (Success)
*/
int main()
{
int i;
char ch;
for(ch = 'a' ; ch <= 'z' ; ch++) {
putchar("%x %d\n");
}
return (0);
}
