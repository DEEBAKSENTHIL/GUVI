#include<stdio.h>
void main()
{
char a[100];
int i,n=0;
printf("Enter the line");
scanf("%[^\n]",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
n=n+1;
}
}
printf("The number of spaces = %d",n);
}
