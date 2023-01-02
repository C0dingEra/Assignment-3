#include<stdio.h>
int main()
{
     char alphabet;
    printf("enter an alphabet\n");
    scanf("%c",&alphabet);
    if(alphabet>64 && alphabet<91)
        printf("your given alphabet is uppercase\n");
    else if(alphabet>96 && alphabet<123)
        printf("your given alphabet is lowercase\n");
    else
    printf("invalid alphabet");
    return 0;

}
