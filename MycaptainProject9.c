#include<stdio.h>
#include<string.h>

struct employee
{
    char empname[20];
    int empage;
    long int empno;
    int salary;
} e[20];

void input()
{
    int i;
    for(i=0; i<20; i++)
    {
      printf("Student %d\n",i+1);
      printf("Enter name :\n");
      gets(e[i].empname);
      printf("Enter age :\n");
      scanf("%d",&e[i].empage);
      printf("Enter phone number :\n");
      scanf("%d",&e[i].empno);
      printf("Enter salary :\n");
      scanf("%d",&e[i].salary);
    }
}

void output()
{
    int i;
      for(i=0; i<20; i++)
    {
        printf("------------------------------------------------------------------------\n");
        printf("Student\t",i+1);
        printf("Name\t",e[i].empname);
        printf("Age\t",e[i].empage);
        printf("Phone no.\t",e[i].empno);
        printf(" salary\t",e[i].salary);
        printf("\n------------------------------------------------------------------------\n");
        printf(" %d\t ",i+1);
        printf("%s\t",e[i].empname);
        printf("%d\t",e[i].empage);
        printf("%d\t ",e[i].empno);
        printf("%d",e[i].salary);
    }
}

int main()
{
  input();
  output();

  return 0;
}
