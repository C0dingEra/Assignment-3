#include<stdio.h>
int main()
{
    int number1,number2,number3;
    printf("enter number1:");
    scanf("%d",&number1);
    printf("enter number2:");
    scanf("%d",&number2);
    printf("enter number3:");
    scanf("%d",&number3);
    if(number1>number2 && number1>number3)
        printf("%d is greater than number2 and number3",number1);
    else if(number2>number1 && number2>number3)
        {
        printf("%d is greater",number2);
    }
    else if(number3>number1 && number3>number2)
        printf("%d is greater",number3);
    else
        printf("number1,number2,number3 are equal");
    return 0;
}
