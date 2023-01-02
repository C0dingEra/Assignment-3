//2. Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{
int number;
    printf("enter the number\n");
    scanf("%d",&number);
    if(number%5==0){
        printf("your number is divisible by 5");
    }
else{
    printf("your number is not divisible by 5");
}
    return 0;
}
