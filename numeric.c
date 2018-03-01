#include<stdio.h>
void main()
{
char a[50];
int i,n,b=0;
printf("Enter the string value");
scanf("%c",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0' && a[i]<='9')
{
b++;
}
n=i+1;
}
if(b==n)
{
printf("The given string is numeric");
}
else
printf("The given string is not a numeric");
}
