#include<stdio.h>
int main()
{
    int number;
printf("enter a number\n");
scanf("%d",&number);
if(number%2==0 && number%3==0)
    printf("number is divisible by 2 and 3\n");
else
    printf("your number is not divisible by 2 and 3");

return 0;
}
