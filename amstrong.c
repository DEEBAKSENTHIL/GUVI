#include<stdio.h>
void main()
{
int a,n,r,x,b=0;
printf("Enter the number and its digits:");
scanf("%d%d",&a,&n);
x=a;
while(x!=0)
{
r=x%10;
b=b+pow(r,n);
x=x/10;
}
if(b==a)
printf("The given number is amstrong");
else
printf("The given number is not a amstrong");
}

