//C program to calculate simple interest
#include<stdio.h>
void main()
{
    float p,t,r,si;
    printf("Enter principal(p),time(t),rate(r): ");
    scanf("%f %f %f",&p,&t,&r);
//formula for simple interest
    si=(p*t*r)/100;

    printf("Simple interest=%.2f",si);
}