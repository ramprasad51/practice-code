//Computing factorial
#include<stdio.h>
int fact(int);
int main()
{
    int result,n;
    printf("Enter a num: ");
    scanf("%d",&n);
    result =fact(n);
    printf("Factorial of %d is %d\n",n,result);
    return 0;
}
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
    
    
}