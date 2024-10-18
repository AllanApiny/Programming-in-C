#include <stdio.h>
#include <stdlib.h>
int factorial(int num){
    int f;
    if (num==1) {f=1;}
    else{
    f=num*factorial(num-1);}
    return f;
}
int main()
{
    int n;

    printf("Enter integer\n");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("%d factorial = %d\n",n,fact);
    return 0;
}
