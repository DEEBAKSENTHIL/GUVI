#include<stdio.h>
void main()
{
int m,n,i,a[i];
printf("Enter the num of terms");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
m=a[0];
for(i=0;i<n;i++)
{
if(m>a[i])
m=a[i];
}
printf("The min value is %d",m);
}
