#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    struct date
    {
        int day;
        int month;
        int year;
    };
    struct date today;
    today.day=27;
    today.month=7;
    today.year=2024;

    printf("today's date is %d/%d/%d",today.day,today.month,today.year);

}
