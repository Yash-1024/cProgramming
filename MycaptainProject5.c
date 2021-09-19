// Sum of digits using recursion

#include<stdio.h>

int digit(int x)
{
  int sum=0;
  if(x!=0)
    return sum=sum+(x%10)+digit(x/10);
  else
    return 0;
}

int main()
{
  int n,r;
  printf("Enter a number to find sum of digits : ");
  scanf("%d",&n);
  r=digit(n);

  printf("Sum of the number %d is : %d",n,r);

  return 0;
}
