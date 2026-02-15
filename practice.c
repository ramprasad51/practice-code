// C program to demonstrate function pointer
#include<stdio.h>
//function definition
int add(int a,int b)
{
    return  a+b;
}

int main()
{
    int result;
//function pointer declaration
    int (*fp)(int,int);
//Initialization pointer to function
    fp=add;
//function call using pointer to function
    result=fp(10,20);
    printf("Sum=%d\n",result);
    return 0;
}