#include <stdio.h>
#include <stdlib.h>
struct date
{
    int month;
    int day;
    int year;
};
const int daysInMonths[12]={31,28,31,30,31,30,31,31,30,31,30,31};
const char daysInWeek[7]={'S','M','T','W','T','F','S'};
int absolute(int a, int b);
int f(int y,int m);
int g(int m);
int N(int f, int g,int d);
int W(int n);
int isLeap(struct date d);
int leapYear(struct date d);
int validDate(struct date d);
int main()

{
    struct date first/*,second*/;
    do
    {
    printf("Enter first date in the format mm dd yyyy\n");
    scanf("%d %d %d",&first.month,&first.day,&first.year);
    if(!validDate(first))
        printf("Invalid date format\n");
    }while(!validDate(first));

    int N1=N(f(first.year,first.month),g(first.month),first.day);
    int w=W(N1);
    printf("%d/%d/%d fell on a ",first.month,first.day,first.year);
    switch(w)
    {
    case 0:
        printf("Sunday"); break;
    case 1:
        printf("Monday"); break;
    case 2:
        printf("Tuesday"); break;
    case 3:
        printf("Wednesday"); break;
    case 4:
        printf("Thursday"); break;
    case 5:
        printf("Friday"); break;
    case 6:
        printf("Monday"); break;
    }

    /*do
    {
    printf("Enter second date in the format mm dd yyyy\n");
    scanf("%d %d %d",&second.month,&second.day,&second.year);

    if(!validDate(second))
        printf("Invalid date format\n");
    }while(!validDate(second));

    int N2=N(f(second.year,second.month),g(second.month),second.day);
    printf("The number of days between the two dates is %d\n",absolute(N1,N2));*/


    return 0;
}

int absolute(int a, int b)
{
    if(a>b) return a-b;
    else return b-a;
}
int f(int y,int m)
{
    if(m<=2) return y-1;
    else return y;
}
int g(int m)
{
    if(m<=2) return m+13;
    else return m+1;
}
int N(int f, int g,int d)
{
    return 1461*f/4+153*g/5+d;
}
int isLeap(struct date d)
{
    return ((d.year%4==0&&d.year%100!=0)||(d.year%400==0));
}
int leapYear(struct date d)
{
    if(d.month==2&&isLeap(d))
        return 29;
    else return daysInMonths[d.month-1];
}
int validDate(struct date d)
{
    if(d.month>12||d.month<1)
        return 0;
    else if(d.day>leapYear(d)||d.day<1)
        return 0;
    else return 1;
}
int W(int n)
{
    return (absolute(n,621049))%7;
}
