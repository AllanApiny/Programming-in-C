#include <stdio.h>
#include <stdlib.h>
int count(const char s[]);
int main()
{
    const char my[]={'M','y','\0'};
    const char nigga[]={'N','i','g','g','a','\0'};
    int m=count(my);;
    int n=count(nigga);
    printf("my=%i, nigga=%i",m,n);

    return 0;
}
int count(const char s[])
{
    int c=0;
    while(s[c]!='\0')
    {
        c++;
    }
    return c;
}
