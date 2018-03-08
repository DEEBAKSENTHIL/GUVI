#include<stdio.h>
void main()
{
char a[100];
int i,n,x=0;
printf("Enter the string");
scanf("%[^\n]s",&a);
n=strlen(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0' && a[i]<='9')
{
x=x+1;
}
}
printf("%d",x);
}
