#include <stdio.h>
#include <stdlib.h>
void change(float array[])
{
    for(int i=0;i<5;i++)
        array[i]*=2;
}
int main()
{
    float array[5];
    printf("Enter 5 values\n");
    for(int i=0;i<5;i++)
    {
        scanf("%f",&array[i]);
    }
    change(array);
    printf("\nNew Values\n");
    for(int i=0;i<5;i++) printf("%f\n",array[i]);
    return 0;
}
