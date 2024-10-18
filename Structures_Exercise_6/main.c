#include <stdio.h>
#include <stdlib.h>
struct date
{
    int month;
    int day;
    int year;
};

struct date dateUpdate(struct date d);
int isLeap(struct date d);
int daysInMonth(struct date d);

int main()
{
    struct date today;
    printf("Enter the date today in the format mm dd yyyy\n");
    scanf("%d %d %d",&today.month,&today.day,&today.year);

    today=dateUpdate(today);
    printf("The date tomorrow is %.2d/%.2d/%d\n",today.month,today.day,today.year);

    return 0;
}

int isLeap(struct date d)
{
    return (((d.year%4==0)&&(d.year%100!=0))||d.year%400==0);
}

int daysInMonth(struct date d)
{
    const int daysPerMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((d.month==2)&&isLeap(d))
        return 29;
    else
        return daysPerMonth[d.month-1];
}
struct date dateUpdate(struct date d)
{
    if(d.day==daysInMonth(d))
    {
        d=(struct date){.day=1,.year=d.year,.month=d.month};
        if(d.month==12)
        {
            d=(struct date){.month=1,.year=d.year+1};
        }
        else
        {
            d=(struct date){.month=d.month,.year=d.year,.day=1};
        }

    }
    else
    {
        d=(struct date){.month=d.month,.year=d.year,.day=d.day+1};
    }
    return d;
}
