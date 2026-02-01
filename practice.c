//Calculator using switch case to perform basic arithmetic operations on two numbers
#include<stdio.h>
int main()
{
    int a,b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Select operator(+,-,*,/,%%):  ");//%% is used to print % symbol
    scanf("  %c",&op);

    switch(op)
    {
        case'+'://Addition
        printf("Result:%d",a+b);
        break;

        case'-'://Subtraction
        printf("Result:%d",a-b);
        break;

        case'*'://Multiplication
        printf("Result:%d",a*b);
        break;

        case'/'://Division
        if(b!=0)
        {
            printf("Result:%d",a/b);
        }
        else
        {
            printf("Division by zer0 is  n0t all0wed");
        }
        break;

        case'%'://Modulus Division
        if(b!=0)
        {
            printf("Result:%d",a%b);
        }
        else
        {
            printf(" In Modulus Division by zer0 is n0t all0wed");
        }
        break;
    }
    return 0;

}