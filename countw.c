#include<stdio.h>
void main()
{
char a[100],i,n=1;
printf("Enter the line");
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
n=n+1;
}
}
printf("%d",n);
}
