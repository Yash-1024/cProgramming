// This is a program to swap two numbers
//without the use of temporary variable

#include<stdio.h>

int main()
{
int a,b;
printf("Enter two numbers to swap\n");
printf("Enter number 1:  ");
scanf("%d",&a);
printf("Enter number 2:  ");
scanf("%d",&b);
printf("--------------------------\n");
a=a+b;
b=a-b;
a=a-b;
printf("Now the two numbers are:\nNumber 1 = %d\nNumber 2 = %d",a,b);
return 0;
}
