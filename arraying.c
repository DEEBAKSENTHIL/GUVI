#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k,a[10],i,sum=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    sum=sum+a[i];
    printf("sum=%d",sum);
getch();
}
