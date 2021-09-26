/* a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
Test Data :
Input the number of terms :5
Expected Output :
9 99 999 9999 99999
The sum of the series = 111105
*/

#include<stdio.h>

int main()
{
int n,i,add,series=0,sum=0;
printf("Enter the number of terms : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    add=9*pow(10,i-1);
    series=series+add;
    printf("%d  ",series);
    sum=sum+series;
}
printf("\nThe sum of the series is : %d",sum);

return 0;
}
