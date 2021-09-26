/*
Write a program in C to display such a pattern for n number of rows using a number which will start with the number 1 and the first and a last number of each row will be 1.
  1
 121
12321
*/

#include<stdio.h>

int main()
{
    int n,i,count,j,dis,k;
    printf("Input the number of rows : ");
    scanf("%d",&n);
    count=n-1;
    for(i=1;i<=n;i++)
    {
    for(k=1;k<=count;k++)
    {
        printf("  ");
    }
    count--;
    for(j=1;j<=2*i-1;j++)
      {
         if(j==1||j==2*i-1)
            dis=1;
         else if(j<=i)
            dis=j;
            else
                dis=2*i-j;
         printf("%2d",dis);
      }
      printf("\n");
    }

    return 0;
}
