#include<stdio.h>

int main()
{
int n;
printf("Enter a number from 1-5\n");
scanf("%d",&n);
printf("Very well your food choice is :\n");
printf("---------------------------------------------------\n");
switch(n)
{
case 1 :
printf("| Food Choice : Pasta\t\t\t\t  |\n| Food Cost : 199\t\t\t\t  |");
break;
case 2 :
printf("| Food Choice : Chicken Roll\t\t\t  |\n| Food Cost : 125\t\t\t\t  |");
break;
case 3 :
printf("| Food Choice : Italian Squid(\"Chef special\")     |\n| Food Cost : 599\t\t\t\t  |");
break;
case 4 :
printf("| Food Choice : Mutton Gravy with Tandoori Roti   |\n| Food Cost : 299\t\t\t\t  |");
break;
case 5 :
printf("| Food Choice : Veg Chowmin\t\t\t  |\n| Food Cost : 149\t\t\t\t  |");
break;
default :
    printf("\n--------!!ERROR!!---------\n");
   printf("Enter a number between 1-5\n");
   printf("--------!!ERROR!!---------\n\n");
   break;
}
printf("\n---------------------------------------------------\n");
return 0;
}

