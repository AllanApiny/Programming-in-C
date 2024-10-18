#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,count=10;
    int *int_pointer=&count;
    x=*int_pointer;
    printf("count=%d, x=%d!\n",count,x);

    return 0;
}
