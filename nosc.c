#include<stdio.h>
void main()
{
char a[100];
int i,n=0;
printf("Enter the string");
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
if(!(a[i]>='0' && a[i]<='9' || a[i]>='a' && a[i]<='z'))
{
n=n+1;
}
}
printf("%d",n);
}
