#include <stdio.h>
#include <stdlib.h>

float absolute(float value);
float squareRoot(float n)
{
    float guess=1.0;
    float epsilon=0.00005;
    if(n<0)
    {
        printf("Negative value entered\n");
        return-1;
    }
    if(absolute(guess*guess-n)<epsilon)
    {
        return guess;
    }
    while(absolute(guess*guess-n)>epsilon) {
        guess=((n/guess+guess)/2);
    }
    return guess;
}
float absolute(float value)
{
    if(value<0)
        return -value;
    else
        return value;
}
int main()
{
    float num;
    printf("Enter value\n");
    scanf("%f",&num);
    printf("The square root of %f is %f\n",num,squareRoot(num));

    return 0;
}
