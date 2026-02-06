// This program takes a number as input and checks whether it is positive, negative, or zero using pointers.
#include<stdio.h>
int main()
{
    int num;
    int *p;

    printf("Enter a number: ");
    scanf("%d",&num);

    p=&num;   //Assigning the address of num to pointer variable  p

    if(*p>0)
    {
        printf("Number is positive");
    }
    else if(*p<0)
    {
        printf("Number is negative");
    }
    else
    {
        printf("Number is zer0");
    }
    return 0;
}