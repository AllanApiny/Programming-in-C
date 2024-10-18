#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct data
    {
        int value;
        struct data *next;
    };

    struct data n1,n2,n3;
    struct data *list_pointer=&n1;
    n1.value=100;
    n2.value=200;
    n3.value=300;

    n1.next=&n2;
    n2.next=&n3;
    n3.next=(struct data *)0;

    while(list_pointer!=(struct data *)0)
    {
        printf("%d\n",list_pointer->value);
        list_pointer=list_pointer->next;
    }




    return 0;
}
