// C program that swap two accounts' balances using functions(swap by reference)
#include <stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void main()
{
    int balance1,balance2;
    printf("Enter balance of account 1: ");
    scanf("%d", &balance1);
    printf("Enter balance of account 2: ");
    scanf("%d", &balance2);
    printf("account balance Before swapping: Account 1 = %d\n Account 2 = %d\n", balance1, balance2);
    swap(&balance1, &balance2);
    printf("account balance After swapping: Account 1 = %d\n Account 2 = %d\n", balance1, balance2);
}