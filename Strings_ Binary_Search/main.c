#include <stdio.h>
#include <stdbool.h>
struct entries
{
    char word[20];
    char meaning[100];
};
struct entries dictionary[100]={
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
int lookup(char w[],int l);
int textLength(char w[]);
void meaning(int id);


int main()
{
    char text[20];
    printf("Enter text!\n");
    scanf("%19s",text);
    int length=textLength(text);
    int index=lookup(text,length);
    meaning(index);


    return 0;
}
void meaning(int id)
{
    if(id!=-1) printf("%s\n\n",dictionary[id].meaning);
    else printf("Sorry, the word is not in our dictionary\n\n");
}
int textLength(char w[])
{
    int i;
    for(i=0;w[i]!='\0';i++);
    return i;
}
int stringCompare(char str1[],char str2[])
{
    int i,answer;
    while(str1[i]==str2[i]&&str1[i]!='\0'&&str2[i]!='\0')
        i++;
    if(str1[i]==str2[i]) answer=0;
    else if(str1[i]>str2[i]) answer=1;
    else answer=-1;
 return answer;
}

int lookup(char w[],int l)
{
    int low,mid,high;
    low=0;
    high=9;
    int i=0;
while(low<high)
    {mid=(low+high)/2;
    if (stringCompare(dictionary[mid].word,w)==0)
    {
        return mid;
    }
    else if (stringCompare(dictionary[mid].word,w)==-1)
    {
        low=mid+1;
    }
    else if(stringCompare(dictionary[mid].word,w)==1)
    {
        high=mid-1;
    }i++;}
return -1;

}
