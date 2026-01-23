// to check whether a number is prime or not
#include <stdio.h>
int isprime(int );
int main()
{
 int n,result;
 printf("enter a number: ");
 scanf("%d",&n);
 result=isprime(n);
 if(result==1)
 printf("%d is prime number",n);
 else
 printf("%d is not a prime number",n);
 return 0;

}
int isprime(int num)
{
    int i;
    if(num<=1)
    return 0;
    for(i=2;i<=num-1;i++)
{
    if(num%i==0)
    return 0;

}
return 1;
}