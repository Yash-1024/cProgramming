/*
Write a program in C to find the sum of the series [ x - x^3 + x^5 + ......].
Test Data :
Input the value of x :2
Input number of terms : 5
Expected Output :
The values of the series:
2
-8
32
-128
512
The sum = 410
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int x,i,terms,sum=0,n,t=0,y=1;
    printf("Input the value of x : ");
    scanf("%d",&x);
    printf("Input the number of terms : ");
    scanf("%d",&n);
    printf("The values of the series :\n ");
    for(i=1;i<=n;i++)
    {
        terms=pow(-1,t)*pow(x,y);
        sum+=terms;
        printf("%d\n",terms);
        t++;
        y+=2;
    }
    printf("Sum of the series : %d ",sum);

    return 0;
}
