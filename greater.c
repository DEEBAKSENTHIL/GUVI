#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("%d is The greatest value",a);
else if(b>c)
printf("%d is The greatest value",b);
else
printf("%d is The greatest value",c);
}
