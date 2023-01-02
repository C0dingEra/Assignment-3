#include<stdio.h>
int main()
{
  int a,b,c;
    printf("enter the length of the sides of triangle\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c)
    {
    printf("triangle is valid");
    }
    else
        {
            printf("triangle is invalid");
        }
return 0;
}
