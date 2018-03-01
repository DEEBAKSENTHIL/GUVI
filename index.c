#include<stdio.h>
void main()
{
int i,a[i],n;
printf("Enter the array value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{ 
printf("\n%d %d",a[i],i);
}
}
