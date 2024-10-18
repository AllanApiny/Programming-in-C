#include <stdio.h>
#include <stdlib.h>
void scalarMultiply(int row, int column, int matrix[row][column], int integer)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
           matrix[i][j]*=integer;
        }
    }

}
void display(int row, int column,int matrix[row][column])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
           printf("%3d  ",matrix[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int row,column;
    printf("Enter number of rows = ");
    scanf("%d",&row);
    printf("Enter number of columns = ");
    scanf("%d",&column);
    printf("Enter values sequentially ");
    int matrix[row][column];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
           scanf("%d",&matrix[i][j]);
        }
    }


    printf("\nOriginal Matrix\n");

    display(row,column,matrix);
    scalarMultiply(row,column,matrix,-2);
    printf("\nNew Matrix\n");
    display(row,column,matrix);

    return 0;
}
