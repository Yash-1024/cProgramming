/*Write a program in C to find the sum of the series [1-X^2/2!+X^4/4!-X^6/6!+....]
Test Data :
Input the Value of x :2
Input the number of terms : 5
Expected Output :
the sum = -0.415873
Number of terms = 5
value of x = 2.000000*/


#include<stdio.h>
#include<math.h>

int fact(int n)
{
int i,x=1;
for(i=1;i<=n;i++)
{
x=x*i;
}
return x;
}

int main()
{
int x,n,i,j,count=0;
double sum=0.0;
printf("input the value of x : ");
scanf("%d",&x);
printf("input the number of terms : ");
scanf("%d",&n);
    for(j=0;j<(n*2);j=j+2)
   {
     sum=sum+((pow(-1,count)*pow(x,j))/fact(j));
     count++;
   }
printf("sum is : %lf",sum);
return 0;
}
