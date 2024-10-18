#include <stdio.h>
#include <stdbool.h>
void readLine(char s[]);
int findString(char s[],char t[]);
bool compareStrings(char str1[],char str2[]);
int count=0;
int main()
{
    char source[81],text[20];
    printf("Enter passage!\n");
    readLine(source);
    printf("Enter text to search!\n");
    readLine(text);

    int index=findString(source,text);
    if(index==-1)
        printf("Text not found in source");
    else
        printf("%s occurs at index %i",text,index);

    return 0;
}

void readLine(char s[])
{
    int i=0;
    do
    {
        s[i]=getchar();
        i++;
    }while(s[i-1]!='\n');
    s[i-1]='\0';
}
bool compareStrings(char str1[],char str2[])
{
    int i=0;
    while(str1[i+count]==str2[i]&&str2[i]!='\0'&&str1[i]!='\0')
    {
        i++;
    }
    if(str2[i]=='\0'&&str1[i-1+count]==str2[i-1])
        return true;
    else return false;
}
int findString(char s[],char t[])
{
    int i;
    char firstLetter=t[0];

    do
    {

        for(i=count;s[i]!='\0';i++)
        {
            if(firstLetter==s[i])
            {
                count=i;
                break;
            }
        }
        if(compareStrings(s,t))
            return count;
        else count++;

    }while(s[i]!='\0');
    return -1;
}
