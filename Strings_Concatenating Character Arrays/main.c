#include <stdio.h>
#include <stdlib.h>

void concat(char str3[],char str1[],int n,char str2[],int m);

int main()
{
    char str1[6]={'H','e','l','l','o',' '};
    char str2[5]={'W','o','r','l','d'};
    char str3[11];

    concat(str3,str1,6,str2,5);

    for(int i=0;i<11;i++)
    printf("%c",str3[i]);
    printf("\n");

    return 0;
}

void concat(char str3[],char str1[],int n,char str2[],int m)
{
    for(int i=0;i<n;i++)
        str3[i]=str1[i];
    for(int i=0;i<m;i++)
        str3[i+n]=str2[i];

}
