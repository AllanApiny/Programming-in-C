#include <stdio.h>
#include <stdlib.h>

int num;
int base;
int count,modified[64];
const char myArray[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};



void convert(void)
{
    count=0;
    while(num!=0)
    {
        modified[count]=num%base;
        num=num/base;
        count++;
    }

}

void reverse(void)
{   printf("\nConverted number to base %d\n",base);
    for(int i=count-1;i>=0;i--)
        printf("%c",myArray[modified[i]]   );
}



int main()
{
    getVariables();
    convert();
    reverse();

    return 0;
}
void getVariables(void)
{
    printf("Enter number to convert\n");

    scanf("%d",&num);
    printf("Enter base to convert to\n");

    scanf("%d",&base);

}
