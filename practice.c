// C program that  swaps two CURRENIE$ values by call by reference and call by value
#include <stdio.h>
void swapbyvalue(int a, int b)//funnction definition
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Preview of swap by value a=%d b=%d\n",a,b);
}
void swapbyreference(int *a, int *b)//function definition
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x,y;
    printf("Enter two CURRENIE$ values:\n");
    scanf("%d %d",&x,&y);
    swapbyvalue(x,y);//function call by value
    printf("After call by value: %d %d\n",x,y);

    swapbyreference(&x,&y);//function call by reference
    printf("After call by reference: %d %d\n",x,y);
    return 0;

}
