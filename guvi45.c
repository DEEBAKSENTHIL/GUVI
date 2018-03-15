#include<stdio.h>
void main()
{
int i,a,x=0;
scanf("%d",&a);
for(i=0;a[i]!='\0';i++)
{
++x;
}
printf("The num of digits in given value is %d",x);
}
