#include <stdio.h>
#include <stdbool.h>
void readline(char s[])
{
    int i=0;
    do
    {
        s[i]=getchar();
        i++;
    }while(s[i-1]!='\n');
    s[i-1]='\0';
}
int n(int a, int b)
{
    if (a<=b) return a;
    else return b;
}
void substring(char source[],int start,int count,char result[])
{
    int i;

    for(i=0;i<n(count,100-start);i++)
    {

        result[i]=source[start+i];
    }

    result[i]='\0';
}
int main()
{
    char line[100],extract[100];
    int index,num;
    printf("Enter text!\n\n");
    readline(line);

    printf("Enter first character index\n");
    scanf("%d",&index);
    printf("Enter number of characters to be extracted\n");
    scanf("%d",&num);
    substring(line,index,num,extract);
    printf("\"%s\"\nwas extracted and stored\n",extract);



    return 0;
}
