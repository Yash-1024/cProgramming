// LCM of two numbers using recursion

#include<stdio.h>

int i=1,lcm;

int lCM(int x,int y)
{
    int count=0;
if(i%x==0&&i%y==0)
{
    lcm=i;
    count++;
}
i++;
if(count==0)
return lCM(x,y);
else
return lcm;
}

int main()
{
int n1,n2;
printf("Enter number 1 : ");
scanf("%d",&n1);
printf("Enter number 2 : ");
scanf("%d",&n2);
lcm=lCM(n1,n2);
printf("LCM of %d and %d is : %d",n1,n2,lcm);

return 0;
}

