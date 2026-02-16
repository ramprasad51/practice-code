// This program performs multiplication, subtraction, and division on two whole numbers entered by the user.
#include<stdio.h>
void main()
{
    int a,b;
    int mul,sub;
    float div;

    printf("Enter two whole numbers: ");
    scanf("%d %d",&a,&b);

    mul=a*b;
    sub=a-b;
    printf("Multiplication result= %d\n",mul);
    printf("Subtraction result=%d\n",sub);

    if(b!=0)
    {
        div=(float)a/b;
        printf("Division result=%.2f\n",div);
    }
    else
    {
        printf("Division by zer0 is n0t all0wed");
    }
}