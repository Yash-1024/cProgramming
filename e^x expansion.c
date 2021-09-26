/*
Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....] or e^x expansion
Test Data :
Input the value of x :3
Input number of terms : 5
Expected Output :
The sum is : 16.375000
*/

#include<stdio.h>
#include<math.h>

int fact(int f)
{
    int i,facto=1;
    for(i=1;i<=f;i++)
    {
        facto*=i;
    }
    return facto;
}

int main()
{
    int x,n,i;
    double sum=0;
    printf("Input the value of x : ");
    scanf("%d",&x);
    printf("Input the number of terms : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum+=pow(x,i)/fact(i);
        printf("%d\n",fact(i));
    }
    printf("Sum of the series is : %lf",sum);

    return 0;
}
