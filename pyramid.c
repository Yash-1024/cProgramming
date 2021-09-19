#include<stdio.h>

/*to print the pattern
   1
  2 3
 4 5 6
7 8 9 10
*/

#include<stdio.h>

int main()
{
int n,i,k,spc,j,t=1;
printf("Enter number of rows of Pyramid : ");
scanf("%d",&n);
spc=n+4-1;
   for(i=1;i<=n;i++)
   {
         for(k=spc;k>=1;k--)
            {
              printf(" ");
            }
	   for(j=1;j<=i;j++)
	   printf("%d ",t++);
	printf("\n");
    spc--;

   }
return 0;
}
