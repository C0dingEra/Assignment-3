#include<stdio.h>
int main()
{
    int number;
printf("enter a number\n");
scanf("%d",&number);
if(number%7==0 && number%3==0)
    printf("number is divisible by 7 and 3\n");
else
    printf("your number is not divisible by 7n and 3");

return 0;
}
