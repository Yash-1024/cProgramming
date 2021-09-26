/*
Write a C Program to display the pattern like pyramid using the alphabet.
        A
      A B A
    A B C B A
  A B C D C B A
*/

#include<stdio.h>

int main()
{
    int n,count,i,j,k;
    char dis;
    printf("Input the number of rows : ");
    scanf("%d",&n);
    count=n-1;
    for(i=1;i<=n;i++)
    {
    for(k=1;k<=count;k++)
        printf("  ");
    count--;
    for(j=1;j<=2*i-1;j++)
      {
         if(j==1||j==2*i-1)
            dis=65;
         else if(j<=i)
            dis=64+j;
            else
                dis=2*i-j+64;
         printf("%2c",dis);
      }
      printf("\n");
    }

    return 0;
}
