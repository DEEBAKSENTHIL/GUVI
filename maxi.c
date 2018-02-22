#include<stdio.h>
void main()
{
int N,i,a[i],M;
printf("Enter the num of terms");
scanf("%d",&N);
for(i=0;i<N;i++)
scanf("%d",&a[i]);
M=a[0];
for(i=0;i<N;i++)
{
if(M<a[i])
M=a[i];
}
printf("The max value is %d",M);
}
