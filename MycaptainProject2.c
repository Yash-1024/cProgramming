#include<stdio.h>

int main()
{
int marks;
char name[50];
printf("Enter your name\n");
scanf("%s",&name);
printf("Enter your marks %s\n",name);
scanf("%d",&marks);
if(marks>100)
{
printf("-------!!!!ERROR!!!!--------\n");
printf("Enter a number between 0-100");
}
else
{
printf("You have got Grade ");
if(marks>84)
printf("A");
else if(marks>69)
printf("B");
else if(marks>54)
printf("C");
else if(marks>40)
printf("D");
else if(marks<40)
printf("F");
printf(" %s",name);
}
return 0;
}
