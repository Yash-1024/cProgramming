/*
. Write a program in C to convert a decimal number into binary without using an array.
Test Data :
Input a decimal number: 25
Binary number equivalent to said decimal number is: 0000000000000000000000000001 1001
*/

#include<stdio.h>

int main ()
{
    int num,bin=0,rem=0,place=1;
    printf("Enter a decimal number : ");
    scanf("%d",&num);
    printf("\nBinary equivalent of %d is ", num);
    while(num)
    {
        rem=num%2;
        num=num/2;
        bin=bin+(rem * place);
        place=place*10;
    }
    printf("%d\n",bin);

    return 0;
}
