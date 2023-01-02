#include<stdio.h>
int main()
{
    int month,january,feburary,march,april,may,june,july,august,september,october,november,december;
    printf("enter a month\n");
    scanf("%d",&month);
        if(month==january)
        printf("31");
        else if(month==feburary)
        printf("30");
        else if(month==march)
        printf("31");
       else if(month==april)
       printf("30");
        else if(month==may)
        printf("31");
       else if(month==june)
       printf("30");
       else if(month==july)
       printf("31");
        else if(month==august)
        printf("31");
       else if(month==september)
       printf("30");
        else if(month==october)
        printf("31");
        else if(month==november)
        printf("30");
        else if(month==december)
        printf("31");

    return 0;
}
