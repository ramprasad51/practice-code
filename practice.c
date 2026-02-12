//To find greatest of two numbers using conditional operator
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter any two number: ");
    scanf("%d %d",&a,&b);
    printf(a>=b?"a is larger": "b is larger");//conditional operator  (? :)
}