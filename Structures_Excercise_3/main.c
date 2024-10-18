#include <stdio.h>
#include <stdlib.h>
struct time
{
    int hours;
    int minutes;
    int seconds;
};
struct time elapsed_time (struct time time1,struct time time2);
int main()
{
    struct time time1,time2;

    printf("Enter initial time in the format hh:mm:ss\n");
    scanf("%d:%d:%d",&time1.hours,&time1.minutes,&time1.seconds);

    printf("Enter final time in the format hh:mm:ss\n");
    scanf("%d:%d:%d",&time2.hours,&time2.minutes,&time2.seconds);

    struct time elapsed=elapsed_time(time1,time2);

    printf("The time elapsed is %d hours, %d minutes and %d seconds",elapsed.hours,elapsed.minutes,elapsed.seconds);

    return 0;
}
struct time elapsed_time (struct time time1,struct time time2)
{
    if (time2.hours<time1.hours)
        time2.hours=time2.hours+24;

    struct time elapsed;

    if (time2.seconds<time1.seconds)
        {time2.seconds=time2.seconds+60;
        time2.minutes--;
        }
    elapsed.seconds=time2.seconds-time1.seconds;

    if (time2.minutes<time1.minutes)
        {
            time2.minutes=time2.minutes+60;
            time2.hours--;
        }
    elapsed.minutes=time2.minutes-time1.minutes;

    elapsed.hours=time2.hours-time1.hours;
    return elapsed;

}
