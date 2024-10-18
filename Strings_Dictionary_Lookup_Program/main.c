#include <stdio.h>
#include <stdbool.h>

struct wordsAndMeanings
{
    char words[20];
    char meanings[200];
};
struct wordsAndMeanings dictionary[100]={
    { "aardvark", "a burrowing African mammal" },
    { "abyss", "a bottomless pit" },
    { "acumen", "mentally sharp; keen" },
    { "addle", "to become confused" },
    { "aerie", "a high nest" },
    { "affix", "to append; attach" },
    { "agar", "a jelly made from seaweed" },
    { "ahoy", "a nautical call of greeting" },
    { "aigrette", "an ornamental cluster of feathers" },
    { "ajar", "partially opened" } };

int wordLength(char w[]);
int lookup (char word[],int length);
void meaning(int index);
void lookup1 (char word[],int length);


int main()
{
    char word[20];
    int length;
    printf("Enter word\n");
    scanf("%s",word);
    length=wordLength(word);
    int index=lookup(word,length);
    meaning(index);



    return 0;
}

int wordLength(char w[])
{
    int i,count=0;
    for(i=0;w[i]!='\0';i++)
        count++;

    return count;

}
int lookup (char word[],int length)
{

    int j;
    for( j=0;j<10;j++)
    {
        int i=0;
        bool isSimilar=true;
        while(isSimilar==true&&i<length)
            {
                if(word[i]==dictionary[j].words[i])
                {
                    i++;
                }
                else if(word[i]!=dictionary[j].words[i])
                    isSimilar=false;
            }
            if(isSimilar&&i==length)
                break;
    }
    if(j<10)
    return j;
    else return -1;
}

void meaning(int index)
{
    if(index==-1)
        printf("Sorry, word not available in my dictionary\n");
    else printf("%s",dictionary[index].meanings);
}
