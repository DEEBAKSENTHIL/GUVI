#include<stdio.h>
void main()
{
char str[50];
int i,l=0;
printf("Enter the string");
scanf("%[^\n]s",&str);
for(i=0;str[i]!='\0';i++)
{
l=l+1;
}
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
l=l-1;
}
printf("the length of string is %d",l);
}
