#include<stdio.h>
#include<math.h>
#define PI 3.14
void main()
{
    float sum,term,x,num;
    int degree;
    int i=2,fact=1;
    printf("Enter degree: ");
    scanf("%d",&degree);
    x=degree*PI/180;//conversion of degree to radian(x)
    sum = x;
    term=x;
    num=x*x; //stores x^2 to avoid recalculation
    while(fabs(term)>=0.0001) //fabs is used to get absolute value of float
    {
        fact=fact*i*i+1;//factorial calculation
        term=term*(-num)/fact;//calculation of each term
        sum+=term;//stores the final result of sin(x)
        i=i+2;//skips even power

    }
    printf("Approx sin(%d)=%.2f\n",degree,sum);//prints the result
}
