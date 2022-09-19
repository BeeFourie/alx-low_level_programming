#include <stdio.h>
#include <stdio.h>
void function(int* a)
{
(*a)++;
printf("(*a) = %d\n",(*a) ); 
}
int main(void)
{
int x = 98;
int *p = &x;
printf("x = %d\n", x );
function(p);
return (0);
}
