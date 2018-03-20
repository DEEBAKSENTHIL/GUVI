#include<stdio.h>
void main()
{
char a[1000];
int i,n,x;float c;
printf("Enter the count: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
x=x+a[i];
}
c=x/n;
printf("The average of given numbers is %f",c);
}
