#include<stdio.h>
void main()
{
char z;
printf("the given charecter is ");
scanf("%c",&z);
if((z>='a' && z<='z')||(z>='A' && z<='Z')) 
printf("ALPHABET");
else
printf("NOT");
}
