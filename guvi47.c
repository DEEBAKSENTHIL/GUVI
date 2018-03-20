#include<stdio.h>
void main()
{
char a[1000];
int i,n,m;
printf("Enter the count of numbers: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
m=a[0];
for(i=0;i<n;i++)
{
if(a[0]<a[i])
a[0]=a[i];
}
printf("The greatest value is %d",a[0]);
for(i=0;i<n;i++)
{
if(m>a[i])
m=a[i];
}
printf("\nThe lowest value is %d",m);
}

