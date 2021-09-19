/*   Write a program in C to display the n terms of harmonic series and their sum.
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
Test Data :
Input the number of terms : 5
Expected Output :
1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
Sum of Series upto 5 terms : 2.283334
*/

#include<stdio.h>
#include<math.h>

int main()
{
int i,n;
double sum=0.00;

/* we can also write int i and typecast near
the division part as shown in comment on line 26*/

printf("Enter number of terms : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
//sum = sum + 1/i;
sum = sum + (double)1/i; //typecasting
if(i!=n)
printf("1/%d + ",i);
else
    printf("1/%d ",i);
}
printf("= %lf",sum);

return 0;
}
