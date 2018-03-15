#include<stdio.h>
void main()
{
char i,a[100],b[100],n=0,m=0;
printf("Enter the string a : ");
scanf("%s",a);
printf("Enter the string b : ");
scanf("%s",b);
for(i=0;a[i]!='\0';i++)
{
n=n+1;
}
for(i=0;b[i]!='\0';i++)
{
m=m+1;
}
if(n>m)
printf("%s",a);
else
printf("%s",b);
}
