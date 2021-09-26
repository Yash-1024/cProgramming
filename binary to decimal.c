/*
Binary to Decimal conversion
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n,r,dec=0,i=0;
    printf("Input a Binary Number : ");
    scanf("%d",&n);
    if(i>=0)
    {
     x :
        r=n%2;
        dec=dec+r*pow(2,i);
        n=n/10;
        i++;

        if(n!=0)
            goto x;
        else
            goto y;
    }
    y : printf("Decimal Number : %d",dec);

    return 0;
}
