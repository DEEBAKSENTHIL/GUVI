#include<stdio.h>
void main()
{
int a,b,i;
scanf("%d%d",&a,&b);
printf("Enter the intervals");
printf("The even numbers between the given intervals are");
for(i=a;i<=b;i++)
if(i%2==0)
printf("\t%d",i);
}
