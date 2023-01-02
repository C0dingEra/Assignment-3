#include<stdio.h>
int main()
{
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	(num&1)?  printf("your number is odd"):printf("your number is even");
	return 0;

}
