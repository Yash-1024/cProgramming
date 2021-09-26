/*
Write a C program to find Strong Numbers within a range of numbers.   // factorial of digits of a number is									        equal to the number

Test Data :
Input starting range of number : 1
Input ending range of number: 200
Expected Output :
The Strong numbers are :
1 2 145
*/

#include<stdio.h>
#include<stdlib.h>

int fact(int n)
{
    long int j,f=1;
    for(j=1;j<=n;++j)
    {
        f=f*j;
    }
    return f;
}


int main()
{
    long int a,b,i,j,r,str,t;
    printf("Input the Range of Number : \n");
    scanf("%d%d",&a,&b);
    printf("Strong Numbers are : ");
    for(i=a;i<=b;i++)
    {
        str=0;
        t=i;
        for(j=i;j>0;j=j/10)
        {
           r=j%10;
           str=str+fact(r);
        }
        if(str==t)
            printf("%d ",t);
    }

    return 0;
}
