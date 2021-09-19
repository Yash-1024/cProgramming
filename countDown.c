#include<stdio.h>
#include<stdlib.h>
/*to print the pattern
   1
  2 3
 4 5 6
7 8 9 10
*/

int main()
{
int row,i,j,spc,k,t=1;
printf("\t\t\t\tEnter number of rows in pyramid\n");
scanf("\t\t\t\t%d",&row);
  spc=row+4-1;
   for(i=1;i<=row;i++)
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
   i=5;
while(i!=-1)
{
    printf("\r\t\t\t\tYou can exit the program in %d sec\r",i);
    i--;
    sleep(1);
}

return 0;
}
