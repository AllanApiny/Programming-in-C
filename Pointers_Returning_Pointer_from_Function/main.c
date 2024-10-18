#include <stdio.h>
#include <stdlib.h>
struct data
{
    int value;
    struct data *next;
};

struct data *search(struct data *begin,int match)
{
    while(begin!=(struct data *)0)
    {
        if(begin->value==match)
            return begin;
        else begin=begin->next;
    }
    return (struct data *)0;
}
int main()
{
    struct data n1,n2,n3;
    n1.value=100,n2.value=200,n3.value=300;
    struct data *start=&n1;
    n1.next=&n2,n2.next=&n3;
    n3.next=(struct data *)0;


    int num;
    printf("Enter value to search!\n");
    scanf("%d",&num);
    struct data *retValue=search(start,num);
    if(retValue!=(struct data *)0)
    {
        printf("%d found\n",retValue->value);
    }
    else printf("Not found");




    return 0;
}
