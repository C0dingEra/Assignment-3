/*write a program to take marks of 5 subjects from the user.Assume marks are given out of 100 and passing marks is 33. now display whether the candidate passed the examination or failed.*/

#include<stdio.h>
int main()
{
int phy,chem,maths,computer,english;
printf("enter the marks of phy\n");
scanf("%d",&phy);
printf("enter the marks of chem\n");
scanf("%d",&chem);
printf("enter the marks of maths\n");
scanf("%d",&maths);
printf("enter the marks of computer\n");
scanf("%d",&computer);
printf("enter the marks of english\n");
scanf("%d",&english);
if(phy>33 && chem>33 && maths>33 && computer>33 && english>33)
{

    printf("you are passed");

}
else
    printf("you are failed");


return 0;
}

