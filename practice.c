//Swapping two numbers using pointers
#include<stdio.h>
int main()
{
    int a,b;
    int *p,*q;
    int temp;  //temporary variable to hold value during swap

    printf("Enter two numbers:  ");
    scanf("%d%d",&a,&b);

    //Assigning addresses of a and b to pointers  variables p and q
    p=&a;
    q=&b;

//Assigning values using pointers
    temp=*p;
    *p=*q;
    *q=temp;

    printf("After swap: \n ");
    printf("a=%d\nb=%d\n",a,b);
    return 0;
}