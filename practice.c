#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float root1,root2;
    float D,real,imag;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f",&a,&b,&c);

    if(a==0 && b==0)
    {

    printf("Invalid coefficents \n");
    return 0;
    }
    else if(a==0)
    {
        root1=-c/b;
        printf("Linear Equation Root: %.2f\n",root1);

    }
    else if((D=b*b-4*a*c)>0)
    {
        root1=(-b+sqrt(D))/(2*a);
        root2=(-b-sqrt(D))/(2*a);
        printf("Roots are real and distinct.\n");
        printf("Root1 = %.2f\nRoot2= %.2f\n",root1,root2);

    }
    else if(D==0)
    {
        root1=-b/(2*a);
        printf("Roots are real & equal \n");
        printf("Root=%.2f\n",root1);
    }
    else
    {
        real = -b/(2*a);
        imag = sqrt(-D)/(2*a);
        printf("Roots are complex and imaginary.\n");
        printf("Root1= %.2f + %.2fi \n",real,imag);
        printf("Root2= %.2f - %.2fi \n",real,imag);
    }
    return 0;
}