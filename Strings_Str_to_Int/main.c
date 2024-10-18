#include <stdio.h>
#include <stdlib.h>

int convert(char str[])
{
    int num, total=0,op=1;
    bool valid = true;
    for(int i=0;str[i]!='\0';i++)
        {if(str[i]=='-') {op=-1; continue;}
        else
        {

            num=str[i]-'0';
        total=(total*10+num)*op;}}
        return total;
}

int main()
{
    int integer;
    char string[20];
    printf("Enter value!\n");
    scanf("%s",string);
    integer=convert(string);
    printf("converted value=%i",integer);

    return 0;
}
