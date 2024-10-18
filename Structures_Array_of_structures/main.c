#include <stdio.h>
#include <stdlib.h>
//#include <cs50.h>
struct time
{
    int hours;
    int minutes;
    int seconds;
};
struct time updateTime(struct time now);
int main()
{
    struct time testtimes[5]= { { 11, 59, 59 }, { 12, 0, 0 }, { 1, 29, 59 },{ 23, 59, 59 }, { 19, 12, 27 }};
    struct time newtimes[5];
    for(int i=0;i<5;i++)
    {
        printf("The current time is %.2d:%.2d:%.2d... ",testtimes[i].hours,testtimes[i].minutes,testtimes[i].seconds);
        newtimes[i]=updateTime(testtimes[i]);
        printf("The time the next second is %.2d:%.2d:%.2d\n",newtimes[i].hours,newtimes[i].minutes,newtimes[i].seconds);
    }

    return 0;
}
struct time updateTime(struct time now)
{
    now.seconds++;
    if(now.seconds==60)
    {
        now.seconds=0;
        now.minutes++;
        if(now.minutes==60)
        {
            now.minutes=0;
            now.hours++;
            if(now.hours==24)
                now.hours=00;
        }
    }
    return now;
}
