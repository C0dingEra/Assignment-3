/*write a program to check whether a given number is three digit number or not*/

#include<stdio.h>
int main()
{
	int a,num;
	printf("enter a number\n");
	scanf("%d",&a);
	if(a>=100 && a<=999)
        printf("your given number is three digit number");
        else
            printf("your number is other than three digit number");

	return 0;
}
