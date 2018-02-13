#include<stdio.h>
void main()
{
int a,b,i,temp1,temp2,n=0,x=0,rem;
printf("Enter the intervals");
scanf("%d%d",&a,&b);
printf("The amstrong numbers are:");
for(i=a;i<=b;i++)
{
n=0;
x=0;
temp1=i;
temp2=i;
while(temp1!=0)
{
n=n+1;
temp1=temp1/10;
}
while(temp2!=0)
{
rem=temp2%10;
x=x+pow(rem,n);
temp2=temp2/10;
}
if(x==i)
{
printf("%d",i);
}
}
}
