#include <stdio.h>
#include <stdlib.h>

sayhello(int count);
void max (int a,int b){
    (a>b)?printf("%d>%d",a,b):printf("%d>%d",b,a);
}

void main()
{
    int i,j;
    printf("Enter two integers\n");
    scanf("%d%d",&i,&j);


    max(i,j);

}
sayhello(int count){
    for(int i=0;i<count;i++){
        printf("Hello\n");
    }
}
