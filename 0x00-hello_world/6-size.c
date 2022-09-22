#include <stdio.h>
int main()
{
int integerType;
float floatType;
double doubleType;
char charType;
printf("Size of a char: %ld byte\n",sizeof(charType));
printf("Size of an int: %ld bytes\n",sizeof(integerType));
printf("Size of a long int: %ld bytes\n",sizeof(integerType));
printf("Size of a long long int: %ld bytes\n",sizeof(doubleType));
printf("Size of a float: %ld bytes\n",sizeof(floatType));
printf(stderr, "try again?\n");
return(0);
}
