#include <stdio.h>
#include <stdlib.h>

int  main(void)
{
    struct date
    {
        int day;
        int month;
        int year;
    };
    const int daysInMonths[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    struct date today, tomorrow;
    printf("Enter todays date in the format mm dd yyyy\n");
    scanf("%d %d %d", &today.month, &today.day, &today.year);

    if(today.day==daysInMonths[today.month-1])
    {
        tomorrow.day=1;
        if(today.month==12)
        {
            tomorrow.month=1;
            tomorrow.year=today.year+1;
        }
        else
        {
            tomorrow.month=today.month+1;
            tomorrow.year=today.year;
        }
    }
    else if(today.day==29 && today.month==2 && ((today.year%4==0 && today.year%100!=0) || today.year%400==0))
    {
        tomorrow.day=1;
        tomorrow.month=today.month+1;
        tomorrow.year=today.year;
    }
    else
    {
        tomorrow.day=today.day+1;
        tomorrow.month=today.month;
        tomorrow.year=today.year;
    }

    printf("Tomorrows's date is %d/%d/%d",tomorrow.month,tomorrow.day,tomorrow.year);
return 0;
}

