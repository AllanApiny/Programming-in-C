#include <stdio.h>
#include <stdlib.h>
int exercise;
int v,bas;
int converted[64];
const char characters[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int stop=1;
void getBaseGetInteger(void)
{
    do
    {
        printf("Enter positive integer to convert\n");
        scanf("%d",&v);

        if (v==0)break;
    }while(v<0);

    do
    {
        if (v==0) break;
        printf("Enter a valid new base to convert to\n");
        scanf("%d",&bas);
    }while(bas<2||bas>16);


}
void convertToNewBase(void)
{
    int index=0;
    while(v!=0)
    {
        int temp=v%bas;
        converted[index]=temp;
        v=v/bas;
        index++;
    }
    printf("\n= ");
    for(int i=index-1;i>=0;i--)
        printf("%c",characters[converted[i]]);
        printf("\n\n\n");
}
void GetExerciseNumber(void)
{
    printf("Specify exercise number! (2-16)\n");

    scanf("%d",&exercise);
    while (exercise>16||exercise<2)
    {
        printf("\nInvalid Exercise number\n");
        printf("Specify valid exercise number! (2-16)\n");
        scanf("%d",&exercise);
    }
}

int getValue(void)
{
    printf("\nEnter triangular value\n");
    int num;
    scanf("%d",&num);
    return num;
}

int triangularNumber(int num)
{
    if(num==1) return 1;
    else return num+triangularNumber(num-1);
}

void triangularOutput(int num2)
{
    printf("The triangular number for %d = %d\n",num2,triangularNumber(num2));
}

float getValue3(void)
{
    printf("Enter value\n");
    float val3;
    scanf("%f",&val3);
    return val3;
}

float getEpsilon(void)
{
    printf("Enter epsilon\n");
    float ep;
    scanf("%f",&ep);
    return ep;
}

float absolute(float input)
{
    if (input<0)input=-input;
    else input=input;
    return input;
}

float squareRoot(float value3,int e)
{
    float guess=1.0;
    while(absolute(guess*guess-value3)>e)
        guess=(value3/guess+guess)/2;
    return guess;

}

float MODsquareRoot(float value3,int e)
{
    int guess=1;
    while(absolute(guess*guess-value3)>e)
    {
        printf("guess=%d\n",guess);
        guess=(value3/guess+guess)/2;}
    return guess;

}

float MODsquareRoot2(float value3,int e)
{
    int guess=1;
    while(absolute((guess*guess)/value3)-e!=1)
    {
        printf("guess=%d\n",guess);
        guess=(value3/guess+guess)/2;}
    return guess;

}
long int x_to_the_n(void)
{
    printf("Enter base\n");
    long int temp,base,power;
    scanf("%ld",&base);
    printf("Enter power\n");
    scanf("%ld",&power);
    temp=base;
    for(int i=1;i<power;i++)
    temp=temp*base;
    return temp;
}
void outputX1X2(float a,float b,float c)
{
    if((b*b-4*a*c<0))
        printf("x1 and x2 are imaginary numbers");
    else
    {
        float ep=getEpsilon();
        float x1=(-b+squareRoot(b*b-4*a*c,ep))/(2*a);
        float x2=(-b-squareRoot(b*b-4*a*c,ep))/(2*a);
        printf("x1 = %.2f;\nx2 = %.2f",x1,x2);
    }
}

int gcd(int u,int v)
{
    while (v!=0)
    {
        int temp=u%v;
        u=v;
        v=temp;
    }
    return u;
}

int lcm(int x,int y)
{
    if(x==0||y==0)
    {
        printf("Zero value entered\n");
        return -1;
    }
    else
    {
        return x*y/gcd(x,y);
    }
}
int prime(unsigned long int num10)
{
    int test=1;
    float srnum=squareRoot(num10,0.00001);
    for(int i=2;i<srnum;i++)
    {
        if (num10%i==0) test=0;
    }
    return test;
}
int arraySum(int array[],int length)
{
    int sum=0;
    for(int i=0;i<length;i++)
    {
        sum+=array[i];
    }
    return sum;
}
void printMatrix(int r, int c,int array[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d   ",array[i][j]);
        }
        printf("\n");
    }
}
void transposeMatrix(int r, int c,int array[r][c])
{
    int arrayT[c][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arrayT[j][i]=array[i][j];
        }

    }
    printf("\nTransposed Matrix\n");
    printMatrix(c,r,arrayT);

}
void sort(int length,int Array[length],int direction)
{
    if (direction==1)
    {
        for(int i=0;i<length-1;i++)
        {
            for(int j=0;j<length-1;j++)
            {
                if(Array[j]>Array[j+1])
                {
                    int temp=Array[j];
                    Array[j]=Array[j+1];
                    Array[j+1]=temp;
                }
            }
        }
    }
    else if (direction==0)
    {
        for(int i=0;i<length-1;i++)
        {
            for(int j=length-1;j>0;j--)
            {
                if(Array[j]>Array[j-1])
                {
                    int temp=Array[j];
                    Array[j]=Array[j-1];
                    Array[j-1]=temp;
                }
            }
        }
    }
}

int main()
{
    GetExerciseNumber();
    if(exercise==2)

    {
        printf("\nExercise 2: Triangular Number\n");
        printf("------------------------------");
        int num=getValue();
        triangularOutput(num);
    }
    else if(exercise==3)
    {
        printf("\nExercise 3: Square Root\n");
        printf("------------------------\n");
        float value3=getValue3();
        float epsilon=getEpsilon();
        printf("The squareroot of %.2f = %.2f\n",value3,squareRoot(value3,epsilon));


    }
    else if(exercise==4)
    {
        printf("\nExercise 4: Modified Square Root\n");
        printf("------------------------\n");
        float value3=getValue3();
        float epsilon=getEpsilon();
        printf("The squareroot of %.2f = %.2f\n",value3,MODsquareRoot(value3,epsilon));


    }
    else if(exercise==5)
    {
        printf("\nExercise 5: Second Modified Square Root\n");
        printf("------------------------\n");
        float value3=getValue3();
        float epsilon=getEpsilon();
        printf("The squareroot of %.2f = %.2f\n",value3,MODsquareRoot2(value3,epsilon));
    }
    else if(exercise==6)
    {
        printf("\nExercise 4: Modified Square Root\n");
        printf("---------------------------------\n");
        double value3=getValue3();
        double epsilon=getEpsilon();
        printf("The squareroot of %.2f = %.2f\n",value3,MODsquareRoot(value3,epsilon));


    }
    else if(exercise==7)
    {
        printf("\nExercise 7: Base \\ Power\n");
        printf("------------------------\n");
        printf("\n%ld\n",x_to_the_n());
    }
    else if(exercise==8)
    {
        printf("\nExercise 8: Quadric Equations\n");
        printf("------------------------------\n");
        int a,b,c;
        printf("Enter value of a\n");
        scanf("%d",&a);
        printf("Enter value of b\n");
        scanf("%d",&b);
        printf("Enter value of c\n");
        scanf("%d",&c);
        outputX1X2(a,b,c);
    }
    else if(exercise==9)
    {
        printf("\nExercise 9: LCM\n");
        printf("----------------\n");
        printf("Enter two integers\n");
        int u,v;
        scanf("%d %d",&u,&v);
        printf("LCM = %d",lcm(u,v));

    }
    else if(exercise==10)

{
    printf("\nExercise 10: PRIME\n");
        printf("----------------\n");
        printf("Enter value\n");
        unsigned long int num;
        scanf("%lu",&num);
        if(prime(num)) printf("%lu is a prime number", num);
        else printf("%lu is NOT a prime number",num);
}
else if(exercise==11)

{
        printf("\nExercise 11: Array Summation\n");
        printf("----------------------------\n");
        printf("Enter length of array\n");
        int l;
        scanf("%d",&l);
        int array[l];
        printf("Enter array values\n");
        for(int i=0;i<l;i++)
            scanf("%d",&array[i]);
        printf("The sum of array elements = %d\n",arraySum(array,l));
}
else if(exercise==12)
        {
            printf("\nExercise 12: Matrix Transposition\n");
            printf("--------------------------------\n");
            int rows,columns;
            printf("Enter number of rows\n");
            scanf("%d",&rows);
            printf("Enter number of columns\n");
            scanf("%d",&columns);
            int matrix[rows][columns];
            printf("Enter matrix values sequentially\n");
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<columns;j++)
                {
                    scanf("%d",&matrix[i][j]);
                }
            }
            printf("\nOriginal Matrix\n");

            printMatrix(rows,columns,matrix);
            transposeMatrix(rows,columns,matrix);

        }
        else if(exercise==13)
        {
            printf("\nExercise 13: Sorting Arrays\n");
            printf("----------------------------\n");
            int length,direction;

            printf("Enter length of array\n");
            scanf("%d",&length);
            printf("Enter \'1\' to sort array in ascending order or \'0\' to sort in descending order\n");
            scanf("%d",&direction);
            int Array[length];
            printf("Enter matrix values sequentially\n");
            for(int i=0;i<length;i++)
            {
                    scanf("%d",&Array[i]);
            }
            sort(length,Array,direction);
            printf("\nSorted Array\n");
            printMatrix(1,length,Array);
        }
        else if(exercise==14)

        {
            printf("\nExercise 14: Global Variables\n");
            printf("------------------------------\n");
        }
        else if(exercise==15)
        {
            printf("\nExercise 15: Converting a Positive Integer to Another Base\n");
            printf("-----------------------------------------------------------\n");
            getBaseGetInteger();
            convertToNewBase();
        }
        else if(exercise==16)
        {
            printf("\nExercise 16: Converting a Positive Integer to Another Base\n");
            printf("-----------------------------------------------------------\n");

            do{
                    getBaseGetInteger();
                    if (v==0)printf("\nExiting Loop\n");break;
                    convertToNewBase();

            } while(1);


        }

    return 0;
}
