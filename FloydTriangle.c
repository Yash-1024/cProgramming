/*
a program in C to print the Floyd's Triangle.
1
01
101
0101
10101
*/

#include<stdio.h>

int main()
{
int n,i,j,k;
printf("Enter number of rows : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2!=0)
{
    k=1;
for(j=1;j<=i;j++)
{

    if(k%2!=0)
    printf("1");
    else
    printf("0");
    k++;
}
}
else
{
k=1;
    for(j=1;j<=i;j++)
{
    if(k%2!=0)
    printf("0");
    else
    printf("1");
    k++;
}
}
printf("\n");
}

return 0;
}
