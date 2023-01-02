#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter a number 1:");
	scanf("%d",&num1);
	printf("enter a number:");
	scanf("%d",&num2);
	if(num1>num2)
    {

        printf("%d is greater",num1);

    }

    else if(num1<num2)
    {

        printf("%d is lesser",num1);
    }
    else{
        printf("number is equal");
    }


	return 0;
}
