#include <stdio.h>
#include <stdlib.h>
int sum(int *a,int *b)
{
    return *a+*b;
}
int main()
{
    int total,a,b;
    a=30;
    b=60;
    total=sum(&a,&b);
    printf("sum= %d\n",total);
    return 0;
}
