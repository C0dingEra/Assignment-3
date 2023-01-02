#include<stdio.h>
int main()
{
    int number;
printf("enter a number\n");
scanf("%d",&number);
if(number==0)
    printf("number is 0\n");
else if(number>0)
    printf("your number is positive");
else if(number<0)
    printf("your given number is negative");
return 0;
}
