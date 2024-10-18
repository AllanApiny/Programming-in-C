#include <stdio.h>
void main()
{
    struct data
    {
        int value;
        struct data *pointer;
    };

    struct data n1,n2,n3;
    n1.value=100;
    n2.value=200;
    n3.value=300;

    n1.pointer=&n2;
    n2.pointer=&n3;

    printf("%d\n",n2.pointer->value);




}
