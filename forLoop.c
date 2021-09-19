#include<stdio.h>

void main()
{
int i,n,sum=0;
printf("enter number of natural numbers\n");
scanf("%d",&n);
printf("----------------------\n");
for(i=1;i<=n;i++)
{
sum+=i;
printf("%d\n",i);
}
printf("sum of first %d number is %d",n,sum);
}
