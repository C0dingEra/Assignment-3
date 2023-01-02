#include<stdio.h>
int main()
{
     char character;
    printf("enter an alphabet\n");
    scanf("%c",&character);
    if(character>=65 && character<=90)
        printf("your given alphabet is uppercase\n");
    else if(character>=97 && character<=122)
        printf("your given alphabet is lowercase\n");
else if(character>=48 && character<=59)
    printf("your given charcter is digit");
    else
    printf("special character");
    return 0;

}
