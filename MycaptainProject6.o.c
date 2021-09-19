// Program to find a number is prime or not using recursion

#include<stdio.h>

int count=0,i=1;

void prime(int x)
{
    if(i<=x)
    {
        if(x%i==0)
            count++;
        i++;
        return prime(x);
    }
    else
    {
        if(count==2)
           printf("%d is a PRIME number",x);
        else
           printf("%d is a NOT PRIME number",x);
    }

}

int main()
{
int n;
printf("Enter a number to check : ");
scanf("%d",&n);
prime(n);

return 0;
}
