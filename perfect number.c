#include<stdio.h>

int main()
{
int i,j,x,y,p;
printf("Enter : ");
scanf("%d%d",&x,&y);
for(i=x;i<=y;i++)
{
    p=0;
for(j=1;j<i;j++)
{
if(i%j==0)
p=p+j;
}
if(p==i)
printf("\n %d",i);
}

return 0;
}
