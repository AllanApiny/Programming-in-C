#include <stdio.h>
#include <stdlib.h>
struct time
{
    int Hours;
    int Minutes;
    int Seconds;
};
struct time timeUpdate(struct time t)
{
    struct time s;
    if (t.Seconds!=59)
    {
        s.Seconds=t.Seconds+1;
        s.Minutes=t.Minutes;
        s.Hours=t.Hours;
    }
    else
    {
        s.Seconds=0;
        if(t.Minutes!=59)
        {
            s.Minutes=t.Minutes+1;
            s.Hours=t.Hours;
        }
        else
        {
            s.Minutes=0;
            if(t.Hours!=23)
            {s.Hours=t.Hours+1;}
            else {s.Hours=0;}
        }
    }
    return s;
}
struct time updateTime (struct time t)
{
    t.Seconds++;
    if (t.Seconds==60)
    {
        t.Seconds=0;
        t.Minutes++;
        if(t.Minutes==60)
        {
            t.Minutes=00;
            t.Hours++;
            if(t.Hours==24)
                t.Hours=00;
        }
    }

    return t;
}
int main()
{
    struct time now,later;
    do
    {

        printf("Enter the current time in the format hh:mm:ss\n");
        scanf("%d:%d:%d",&now.Hours,&now.Minutes,&now.Seconds);
        if((now.Hours>23||now.Hours<0)||(now.Minutes>59||now.Minutes<0)||(now.Seconds>59||now.Seconds<0))
            printf("\n\nInvalid time entered");
    }while((now.Hours>23||now.Hours<0)||(now.Minutes>59||now.Minutes<0)||(now.Seconds>59||now.Seconds<0));
    later=updateTime(now);
    printf("\nUpdated time is %.2d:%.2d:%.2d\n",later.Hours,later.Minutes,later.Seconds);

    return 0;
}
