/*
38. Write a program in C to check whether a number is a palindrome or not.
Test Data :
Input a number: 121
Expected Output :
121 is a palindrome number.
*/

#include<stdio.h>

int main()
{
  int n,t,reverse=0,rem;
  printf("Enter a number: ");
  scanf("%d", &n);
  t=n;
  while(n!=0)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
  }
  if(reverse==t)
  printf("%d is a palindrome Number",t);
    else
        printf("%d is not a palindrome Number",t);
    return 0;
}
