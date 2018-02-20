#include<stdio.h>
void main()
{
int m,h,t;
printf("Enter time in minutes");
scanf("%d",&t);
h=t/60;
m=t%60;
printf("The time is %d hours and %d minutes",h,m);
}
