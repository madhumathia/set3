#include<stdio.h>
#include<conio.h>
void main()
{
    int min,sec;
    scanf("%d",&min);
    printf("Enter time in minutes : %d",min);
    int hrs=min/60;
    int minutes=min%60;
    if(minutes>60)
    {
        sec=minutes%60;
        minutes=minutes-sec;
    }
    printf("\n%d : %d : %d ",hrs,minutes,sec);
}
