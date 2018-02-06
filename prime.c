#include<stdio.h>
void main()
{
int a,i,x=0;
printf("Enter the number:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
x=x+1;
}
if(x==2)
printf("The given number is prime");
else
printf("The given number is not a prime");
}
