/*
Write a program in C to display the first n terms of Fibonacci series.
Fibonacci series 0 1 2 3 5 8 13 .....
Test Data :
Input number of terms to display : 10
Expected Output :
Here is the Fibonacci series upto to 10 terms :
0 1 1 2 3 5 8 13 21 34
*/

#include<stdio.h>

int main()
{
int n,a=0,b=1,j,sum=0;
printf("Input number of terms to display : ");
scanf("%d",&n);
for(j=0;j<n;j++)
{
printf("%d ", sum);
a = b; // swap elements
b = sum;
sum = a + b; // next term is the sum of the last two terms
}

return 0;
}
