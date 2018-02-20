#include<stdio.h>
void main()
{
int a,n,d,i,t;
printf("Enter the first term");
scanf("%d",&a);
printf("Enter the total number of terms");
scanf("%d",&n);
printf("Enter the difference value");
scanf("%d",&d);
t=a+(n-1)*d;
printf("Sum of the serious");
for(i=a;i<=t;i=i+d)
{
if(i!=t)
printf("%d",i);
else
printf("%d",t);
}
}
