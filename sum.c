#include<stdio.h>
int main()
{
int i,sum=0,a;
printf("enter a number");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
sum=sum+i;
}
printf("n sum of first %d is :%d",a,sum);
return 0;
}
