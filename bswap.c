#include<stdio.h>
void main()
{
int a,b;
printf("Enter the values of a and b");
scanf("%d%d",&a,&b);
a^=b;
b^=a;
a^=b;
printf("The value of a & b is %d %d",a,b);
}
