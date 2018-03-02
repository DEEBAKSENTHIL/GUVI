#include<stdio.h>
void main()
{
int a[1000],i,j,t,l;
printf("Enter the limit");
scanf("%d",&l);
printf("Enter the serious");
for(i=0;i<l;i++)
scanf("%d",&a[i]);
for(i=0;i<l;i++)
{
for(j=0;j<l;j++)
{
if(a[i]>a[j])
{
t=a[j];
a[j]=a[i];
a[i]=t;
}
}
}
printf("The result is :%d",a[l%2]);
}
