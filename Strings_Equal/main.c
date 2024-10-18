#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isEqual(char a[],char b[]);
int main()
{
    char str1[20],str2[20];
    printf("Enter first string\n");
    scanf("%19s",str1);
    printf("Enter second string\n");
    scanf("%19s",str2);
    if(isEqual(str1,str2))
        printf("The strings are equal\n");
        else
        printf("the strings are not the same");

    return 0;
}
bool isEqual(char a[],char b[])
{
    int i;
    for(i=0;a[i]!='\0'||b[i]!=0;i++)
    {
        //printf("a[%i]=%c, b[%i]=%c\n",i,a[i],i,b[i]);
        if(a[i]!=b[i])
            return false;
    }
    if(a[i]=='\0'&&b[i]!='\0')
        return false;
    else return true;
}
