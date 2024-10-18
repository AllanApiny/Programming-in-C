#include <stdio.h>
#include <stdbool.h>
typedef struct
{
    int day;
    int month;
    int year;
}date;
const int daysPerMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
date dateCalc(date td);
bool isLeapYear(date td);

int main()
{
    date today,tomorrow;
    printf("Enter today's date in the format mm/dd/yyyy\n");
    scanf("%d/%d/%d",&today.month,&today.day,&today.year);
    tomorrow=dateCalc(today);
    printf("The date tomorrow is %d/%d/%d\n",tomorrow.month,tomorrow.day,tomorrow.year);
    return 0;
}

bool isLeapYear(date td)
{
    return ((td.year%4==0&&td.year%100!=0)||(td.year%400==0));
}

int monthDays(date td)
{
    if(isLeapYear(td)&&td.month==2)
    {
        return 29;
    }
    else return daysPerMonth[td.month-1];
}

date dateCalc(date td)
{
    date tm;
    if(td.day!=monthDays(td))
    {
        tm.day=td.day+1;
        tm.month=td.month;
        tm.year=td.year;
    }
    else
    {
        tm.day=1;
        if(td.month==12)
        {
            tm.month=1;
            tm.year=td.year+1;
        }
        else
        {
            tm.month=1+td.month;
            tm.year=td.year;
        }
    }

    return tm;
}
