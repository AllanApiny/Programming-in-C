#include <stdio.h>
#include <stdlib.h>

void variables(int n)
{
    static int var1=1;
    int var2=1;
    auto int var3=1;
    static int i=0;

    for( i;i<n;i++)
    {

        printf("\nIteration %d\n",i+1);
        printf("static int var1 = %d\n",var1);
        printf("int var2        = %d\n",var2);
        printf("auto int var3   = %d\n\n",var3);
        var1++; var2++; var3++;
    }

}
int main()
{
    variables(1);
    printf("\n\nNEW \n");
        variables(2);


    return 0;
}
