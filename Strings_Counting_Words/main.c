#include <stdio.h>
#include <stdbool.h>

bool isAlphabetic(char c);
int wordCount(char string[]);

int main()
{

    char text1[] = "Well, here goes.";
    char text2[] = "And here we go... again.";
    printf("%s     -%7d words\n",text1,wordCount(text1));
    printf("%s     -%7d words",text2,wordCount(text2));


    return 0;
}

bool isAlphabetic(char c)
{
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        return true;
    else return false;
}
int wordCount(char string[])
{
    int i,count=0;
    bool isNewWord=true;
    for(i=0;string[i]!='\0';i++)
    {
        if(isAlphabetic(string[i])&&isNewWord)
            {count++;
            isNewWord=false;}
        else if(isAlphabetic(string[i]))
                {
                    isNewWord=false;
                }
        else
            isNewWord=true;
    }
    return count;
}
