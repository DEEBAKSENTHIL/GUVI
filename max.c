#include<stdio.h>
void main()
{
int i,a[i],j,x;
printf("Enter the values: ");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
x=a[9];
for(i=0;i<10;i++)
{
if(x<a[i])
{
j=x;
x=a[i];
a[i]=j;
}
}
printf(" The max value is %d",x);
}
