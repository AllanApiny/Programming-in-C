#include <stdio.h>
#include <stdlib.h>

struct date
    {
        int day;
        int month;
        int year;
    };
struct date today,tomorrow;

int daysInMonths[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int leapFeb (struct date d);

struct date dateUpdate(struct date today);


int main()
{
    int leapFeb (struct date d);
    struct date thisday,nextday;
    do {
    printf("Enter todays date in the format mm dd yyyy\n");
    scanf("%d%d%d",&thisday.month,&thisday.day,&thisday.year);

    if((thisday.month>12||thisday.month<1)||(thisday.day<1||thisday.day>leapFeb(thisday)))
        {
        printf("\nInvalid date format\n");
        }
    } while((thisday.month>12||thisday.month<1)||(thisday.day<1||thisday.day>leapFeb(thisday)));


    nextday=dateUpdate(thisday);

    printf("\nThe date tomorrow is %.2d/%.2d/%d\n\n",nextday.month,nextday.day,nextday.year);


    return 0;
}


int isLeapYear(struct date d)
{
    if ((d.year%4==0&&d.year%100!=0)||(d.year%400==0))
        return 1;
    else return 0;
}
int leapFeb (struct date d)
{
    if ((d.month==2)&&(isLeapYear(d)))
    {
        return 29;
    }
    else return daysInMonths[d.month-1];
}

struct date dateUpdate(struct date today)
{
    struct date tomorrow;
    if (today.day==leapFeb(today))
    {
        tomorrow=(struct date){.day=1};

        if (today.month==12)
        {
            tomorrow={.year=today.year+1,.month=1};
            //tomorrow.year=today.year+1;
            //tomorrow.month=1;
        }
        else
        {
            tomorrow={.month=today.month+1,.year=today.year};
            //tomorrow.month=today.month+1;
            //tomorrow.year=today.year;
        }
    }
    else
    {
        tomorrow={.day=today.day+1,.month=today.month,.year=today.year};
        /*tomorrow.day=today.day+1;
        tomorrow.month=today.month;
        tomorrow.year=today.year;*/
    }
return tomorrow;
}
