/*write a program which takes the cost price and selling price of a product from the user.now calculate and print profit or loss percentage*/

#include<stdio.h>
int main()
{
float cp,sp,result;
printf("enter the cost price\n");
scanf("%f",&cp);
printf("enter the selling price\n");
scanf("%f",&sp);
result=(cp-sp)/cp*100;
printf("%f",result);
return 0;
}
