#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the values of a and b :");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("The value of a and b is %d %d",a,b);
}
