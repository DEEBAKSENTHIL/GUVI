#include<stdio.h>
void main()
{
char a[1000];
int i,n=0;
printf("Enter the paragraph");
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='.')
{
n=n+1;
}
}
printf("%d",n);
}
