#include <stdio.h>
#include <stdlib.h>
int fib(int l)
{
    if(l==0) return 0;
    else if (l==1) return 1;
    else return fib(l-1)+fib(l-2);

}
int main()
{
    int length;
    do
    {
        printf("Enter length of sequence\n");
        scanf("%d",&length);
        if (length<4) printf("Length too short\n");
    } while (length<4);
    int f1=0,f2=1,f3,i;
    printf("\nIterative Solution\n");
    printf("%d, %d, ",f1,f2);
    for(i=2;i<length;i++)
    {
        f3=f2+f1;
        printf("%d",f3);
        f1=f2;
        f2=f3;
        if (i!=length-1)
            printf(", ");
        else printf("\n");
    }
printf("\nRecursive Solution\n");
    for(i=0;i<length;i++)
    {
        printf("%d",fib(i));
        if (i!=length-1)
            printf(", ");
        else printf("\n");
    }


    return 0;
}
