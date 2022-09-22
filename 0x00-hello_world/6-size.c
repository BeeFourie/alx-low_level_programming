#include <stdio.h>
/**
 * main - Entry point
 * Description: 'size of diffrent data types'
 * Return: Always 0
 */
int main()
{
int integerType;
float floatType;
double doubleType;
char charType;
printf("Size of a char: %ld byte(s)\n", sizeof(charType));
printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
printf("Size of a long int: %ld byte(s)\n", sizeof(integerType));
printf("Size of a long long int: %ld byte(s)\n", sizeof(doubleType));
printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
fprintf(stderr, "try again?\n");
return(0);
}
