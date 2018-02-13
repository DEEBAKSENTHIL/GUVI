#include<stdio.h>
void main()
{
int a,i,fact=1;
printf("Enter the number");
scanf("%d",&a);
for(i=1;i<=a;i++)
fact=fact*i;
printf("The factorial of given number is %d",fact);
}
