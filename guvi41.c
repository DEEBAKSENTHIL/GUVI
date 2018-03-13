#include<stdio.h>
void main()
{
char a[1000];
int i,n;
printf(" ENTER THE STRING ");
scanf("%s",a);printf("Enter the num of times to print");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("\n%s",a);
}
}
