/*
Write a program in C to Check Whether a Number can be Express as Sum of Two Prime Numbers.
Test Data :
Input a positive integer: 16
Expected Output :
16 = 3 + 13
16 = 5 + 11
*/

#include<stdio.h>

int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
        {
            if(n%i==0)
                count++;
        }
        if(count==2)
            return n;
        else
            return 0;
}

int main()
{
    int n,i,j,r=0,count=0;
    printf("Input a Positive Number : ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
       r=prime(i);

       if(r==i&&prime(n-r)==n-r)
       {
           count++;
           printf("%d = %d + %d\n",n,r,n-r);
       }

    }
    if(count==0)
    printf("%d can\'t be expressed as sum of prime numbers\n\n",n);

    return 0;
}
