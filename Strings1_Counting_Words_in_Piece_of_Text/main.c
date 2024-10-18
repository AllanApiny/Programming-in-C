#include <stdio.h>
#include <stdbool.h>


void readLine(char buffer[]);
bool isAlphabet(char c);
int wordCount(char string[]);

int main()
{
    char array[100];
    bool isEnd=true;
    int count=0;
    printf("Enter text\n");
    printf("Press return key when done\n");
    while(isEnd)
    {
        readLine(array);
        count+=wordCount(array);
                if(array[0]=='\0')
            isEnd=false;

    }
    printf("End\nThere are %i words in the passage\n",count);


    return 0;
}

void readLine(char buffer[])
{
    int i=0;
    do
    {
        buffer[i]=getchar();
        i++;
    }while(buffer[i-1]!='\n');
    buffer[i-1]='\0';
}

bool isAlphabet(char c)
{
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        return true;
    else return false;
}

int wordCount(char string[])
{
    int i,count=0;
    bool newWord=true;
    for(i=0;string[i]!='\n';i++)
    if(isAlphabet(string[i])&&newWord)
        {count++;
        newWord=false;}
        else if(isAlphabet(string[i]))
                newWord=false;
                else newWord=true;
                return count;
}
