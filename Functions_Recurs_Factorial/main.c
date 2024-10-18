#include <stdio.h>
#include <stdlib.h>
unsigned long long int fact(int num)
{
    if(num==1) return 1;
    else return num*fact(num-1);
}
int main()
{
    int num;
    printf("Enter value!\n");
    scanf("%d",&num);
    printf("%d factorial = %llu",num,fact(num));

    return 0;
}
