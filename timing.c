#include<stdio.h>
void main()
{
int m,h,s;
printf("Enter the time in minutes");
scanf("%d",&m);
h=m/60;
s=(m%60)*60;
printf("The time is %d hours and %d seconds",h,s);
}
