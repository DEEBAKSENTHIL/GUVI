#include<stdio.h>
void main()
{
int h1,h2,m1,m2,h3,m3,a,b,c;
printf("enter the hour of 1st time");
scanf("%d",&h1);
printf("enter the min of 1st time");
scanf("%d",&m1);
printf("enter the hour of 2nd time");
scanf("%d",&h2);
printf("enter the min of 2nd time");
scanf("%d",&m2);
a=(60*h1)+m1;
b=(60*h2)+m2;
if(a>b)
{
c=a-b;
}
else
c=b-a;
h3=c/60;
m3=c%60;
printf("The remaining time is %d hours and %d minutes",h3,m3);
}
