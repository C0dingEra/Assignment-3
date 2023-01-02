/*write a program to check whethear a given year is leap year or not*/

#include<stdio.h>
int main()
{

	int a;
	printf("enter a year\n");
	scanf("%d",&a);
	if(a%400==0 || a%4==0 && a%100!=0)
	{

	printf("your given year is a leap year");
	}

	else {

	printf("not a leap year");

}
	return 0;
}
