/*
Write a program in C to display the n terms of square natural number and their sum.
1 4 9 16 ... n Terms
Test Data :
Input the number of terms : 5
Expected Output :
The square natural upto 5 terms are :1 4 9 16 25
The Sum of Square Natural Number upto 5 terms = 55
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,sum=0;
    printf("Input the number of terms : ");
    scanf("%d",&n);
    printf("IThe square natural number upto %d terms are : ",n);
    for(i=1;i<=n;i++)
    {
        printf("  %d  ",i*i);
        sum+=i*i;
    }
    printf("\nThe sum of square natural number upto %d terms is : %d",n,sum);

    return 0;
}
