#include<stdio.h>

int main()
{
/*program to print a table*/
/*this is my first program on a daily basic*/
int n,i,table;
printf("enter a number to print table\n");
scanf("%d",&n);
printf("table of %d\n",n);
for(i=1;i<=10;i++)
{
table=i*n;
printf("%d x %d = %d\n",n,i,table);
}
return 0;
}
