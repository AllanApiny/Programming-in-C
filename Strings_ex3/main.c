#include<stdio.h>
#include<stdbool.h>

void readLine(char s[]);
int countWords(char s[]);

int main(void)
{
    char string[81];
    int TotalWords=0;
    printf("Enter text\nPress 'Return Key' when done\n\n");
    do
    {
        readLine(string);
        TotalWords=TotalWords+countWords(string);
    }while(string[0]!='\0');
    printf("The total number words in the above passage is %i\n",TotalWords);




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
bool isNumber(char c)
{
    if((c>='0'&&c<='9')||c=='-'||c=='.'||c==',')
        return true;
    else return false;
}
bool isAlpabet(char c)
{
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||c=='\'')
        return true;
    else return false;
}
int countWords(char s[])
{
    bool isNewWord=true;
    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(isAlpabet(s[i])||isNumber(s[i]))
        {
            if(isNewWord)
                count++;
            isNewWord=false;
        }
        else
            isNewWord=true;
    }
    return count;
}
