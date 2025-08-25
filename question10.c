//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main()
{
    int time,seconds,minute,hour;
    printf("enter the time in seconds\n");
    scanf("%d",&time);
    hour=time/3600;
    time=time%3600;
    minute=time/60;
    seconds=time%60;
    printf("time is= %d:%d:%d\n",hour,minute,seconds);
    return 0;
}             
