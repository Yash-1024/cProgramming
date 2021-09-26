#include<stdio.h>

int main()
{
    int array[10][10],i,j,(*p)[10][10],sum=0;
    p=array;
    printf("Input elements in the matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
                printf("Element - [%d][%d] : ",i,j);
                scanf("%d",p[i][j]);
            }
    }
    printf("\nThe matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
                printf("%d  ",*p[i][j]);
                if(i==j)
                    sum+=*p[i][j];
            }
        printf("\n");
    }
    printf("\nsum of diagonal elements is : %d",sum);

    return 0;
}
