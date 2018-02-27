#include<stdio.h>
void main()
{
int i,j,n,a[i],temp,x;
printf("Enter the array value");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
x=n/2;
printf("The median value is %d",a[x]);
}
