/*
Write a program in C to display the number in reverse order.
Test Data :
Input a number: 12345
Expected Output :
The number in reverse order is : 54321
*/

#include<stdio.h>
#include<math.h>

 int main()
{
int n, reverse=0, rem;
printf("Enter a number: ");
  scanf("%d", &n);
  while(n!=0)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
  }
  printf("Reversed Number: %d",reverse);
return 0;
}
