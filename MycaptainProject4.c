/*
I was not sure of the pattern so i assumed it to be like is

 print
          01
         0101
        010101
       01010101
      0101010101
     010101010101

If its wrong please tell me the correct pattern also captain
*/

#include<stdio.h>

int main()
{
int n,i,k,spc,j;
printf("Enter number of rows of Pyramid : ");
scanf("%d",&n);
spc=n+3;
   for(i=1;i<=n;i++)
   {
         for(k=spc;k>=1;k--)
            {
              printf(" ");
            }
	   for(j=1;j<=i;j++)
	   printf("01");
	printf("\n");
    spc--;
   }

return 0;
}
