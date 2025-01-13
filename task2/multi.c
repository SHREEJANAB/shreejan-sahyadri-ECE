#include<stdio.h>
void main()
{
int mul=0,i,n;
printf("Enter the number: ");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
mul=n*i;
printf("%d*%d=%d\n",n,i,mul);
}
}
