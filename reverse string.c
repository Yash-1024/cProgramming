/*
Write a program in C to print a string in reverse order.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s[20];
    printf("Input a String : ");
    gets(s);
    printf("\n%s",strrev(s));

    return 0;
}
